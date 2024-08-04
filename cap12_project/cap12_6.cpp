#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x);
int main()
{
    using namespace std;
    srand(time(0));
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximun size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);
    Queue line_2(qs);
    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;

    double perhour = 1;
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;
    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    int wait_time_2 = 0;
    long line_wait = 0;
    double average_time;
    int line_size = 0;
    int line_2_size = 0;
    while(perhour++ && average_time <=1)
    {
        while (!line.isempty()) 
        {
           line.dequeue(temp);
        }
        while (!line_2.isempty()) 
        {
           line_2.dequeue(temp);
        }
        min_per_cust = MIN_PER_HR / perhour;
        for(int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if(newcustomer(min_per_cust))
            {
                if(line.isfull() && line_2.isfull())
                    turnaways++;
                else if(line_size < line_2_size)
                {
                    customers++;
                    temp.set(cycle);
                    line.enqueue(temp);
                    line_size++;
                }
                else
                {
                    customers++;
                    temp.set(cycle);
                    line_2.enqueue(temp);
                    line_2_size++;
                }
            }
            if(wait_time <=0 && !line.isempty())
            {
                line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if(wait_time_2 <=0 && !line_2.isempty())
            {
                line_2.dequeue(temp);
                wait_time_2 = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if(wait_time > 0)
                wait_time--;
            if(wait_time_2 > 0)
                wait_time_2--;
            sum_line += line.queuecount()+ line_2.queuecount();
        }
        if (customers > 0) {
          average_time = (double)line_wait / served;
          cout << "customers accepted: " << customers << endl;
          cout << "  customers served: " << served << endl;
          cout << "         turnaways: " << turnaways << endl;
          cout << "average queue size: ";
          cout.precision(2);
          cout.setf(ios_base::fixed, ios_base::floatfield);
          cout << (double)sum_line / cyclelimit << endl;
          cout << " average wait time: " << average_time << " minutes\n";
        } 
        else
          cout << "No customers!\n";
    }
    cout << perhour;
}
bool newcustomer(double x) { return (std::rand() * x / RAND_MAX < 1); } 