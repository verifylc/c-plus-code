#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect_1.h"
//#include <fstream>
#define OS  cout
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
   // ofstream fout;
   // fout.open("cap1.txt");
    cout << "Enter target distance (q to quit): ";
    while(cin >> target)
    {
        cout << "Enter step length: ";
        if(!(cin>> dstep))
          break;
        //OS << "target Distance: " << target << ", step size " << dstep << endl;
        while(result.magval() < target)
        {
            direction = rand() %360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
            //OS << steps << ": ";
           // OS << result;
        }
        OS << "After " << steps << " steps, the subject ";
        OS << "hase the following location:\n";
        OS << result;
        result.polar_mode();
        OS << " or\n" << result << endl;
        OS << "Average outward distance per step = "
           << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout <<"Bye!\n";
    cin.clear();
    while(cin.get()!='\n')
      continue;
    //fout.close();
    return 0;
}