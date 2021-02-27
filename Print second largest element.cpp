/*Write a C++ program to find second largest element in an 
given array of integers*/

#include <iostream>

using namespace std;

int main()
{
    int n,i,a[50],max1, max2;
    
    cout<<"How many number you want to print ? \n";
    cin>>n;
    
    cout<<"Enter the number \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    max1 = a[0];
         for(i=0;i<n;i++)
     {
         if(max1<a[i])
             {
             max1 = a[i];  
             continue;
             }
     }
    
     max2 = a[0];
         for(i=0;i<n;i++)
     {
         if(max2<a[i] && max1>a[i])
             {
             max2 = a[i];        
             }
     }
     cout<<"\nmax2 is "<<max2;
     
     return 0;
}
