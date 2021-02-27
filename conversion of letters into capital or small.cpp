//conversion of letters into capital or small

#include <iostream>

using namespace std;

int main()
{
   char a;
  
   cout<<"Enter a char : ";
   cin>>a;
  
   int b = (int)a;  
    if(a>=65 && a<=90)
    b=b+32;
    else if(a>=97 && a<=122)
    b=b-32;
    
    a = (char)b;
    cout<<"Converted char is : "<<a;

    return 0;
}
