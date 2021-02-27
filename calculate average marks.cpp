/*calculate average marks*/

#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e;
    
    cout<<"Enter the 5 marks : \n";
    cin>>a>>b>>c>>d>>e;
    
    float avg = (a+b+c+d+e)/5;
    
    cout<<"Average marks is"<<avg;

    return 0;
}
