/*Calcute the simple interest */

#include <iostream>

using namespace std;

int main()
{
   int t;
   float p,r,S_I;
   
   cout<<"Enter the value of principal, rate, time :\n";
   cin>>p>>r>>t;
   
   S_I = (p*r*t)/100;
   
   cout<<"the value of simple interest is : "<<S_I;

    return 0;
}
