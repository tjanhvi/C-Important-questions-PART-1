//calculate the compound interest 

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float p,r,t,n,C_I,A;
    
    cout<<"Enter the value of p,r,t,n : ";
    cin>>p>>r>>t>>n;
    
    A = p*pow((1 + r/100),n); //CI = principle * pow((1 + rate / 100), time)
    
    C_I = A - p;
    
    cout<<"C_I : ";
    cout<<C_I;
    
 
    return 0;
}
