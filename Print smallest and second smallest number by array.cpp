/*Write a C++ program to find the smallest and second smallest 
elements in a given array of integers*/

#include <iostream>

using namespace std;

int main()
{
    int n,i,a[50], s1, s2;
    
    cout<<"How many number you want to print ? \n";
    cin>>n;
    
    cout<<"Enter the number \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    s1 = a[0];
         for(i=0;i<n;i++)
     {
         if(s1>a[i])
             {
             s1 = a[i];        
             }
     }
     cout<<"s1 is "<<s1;
     
     s2 = a[0];
         for(i=0;i<n;i++)
     {
         if(s2>a[i] && s1!=a[i])
             {
             s2 = a[i];        
             }
     }
     cout<<"\ns2 is "<<s2;
     
    return 0;
}
