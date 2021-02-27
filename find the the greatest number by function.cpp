/*find the the greatest by function*/

#include <iostream>

using namespace std;

int greatest(int a, int b); //forward declaration
int main()
{
    int a,b;
    
    cout<<"Enter 2 numbers to find the the greatest"<<endl;
    cin>>a>>b;
    
    int c=greatest(a,b);
    cout<<"Greatest value is: "<<c<<endl;
    cout<<"Another greatest number out of 5 and 6 is: "<<greatest(5,6);
    return 0;
}

int greatest(int x, int y)
{
  if (x>y)
  return x;
  else
  return y;
}