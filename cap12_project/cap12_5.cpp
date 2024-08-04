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
    long line_wait = 0;
    double average_time;
    while(perhour++ && average_time <=1)
    {
        while (!line.isempty()) 
        {
           line.dequeue(temp);
        }
        min_per_cust = MIN_PER_HR / perhour;
        for(int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if(newcustomer(min_per_cust))
            {
                if(line.isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);
                    line.enqueue(temp);
                }
            }
            if(wait_time <=0 && !line.isempty())
            {
                line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if(wait_time > 0)
                wait_time--;
            sum_line += line.queuecount();
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