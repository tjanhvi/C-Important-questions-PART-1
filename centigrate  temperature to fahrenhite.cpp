/*convert centigrate  temperature to fahrenhite */

#include <iostream>

using namespace std;

int main()
{
   float c,f;
   
   cout<<"Enter the value in C: \n";
   cin>>c;
   
   f= (9*c/5)+32;
   
   cout<<"Temperature in fahrenhite :\n"<<f;

    return 0;
}
