/*Write a C++ program to find the largest three elements in an array*/
#include <iostream>

using namespace std;

int main()
{
    int n,i,a[50],max1, max2, max3;
    
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
             }
     }
     cout<<"max1 is "<<max1;
     
     max2 = a[0];
         for(i=0;i<n;i++)
     {
         if(max2<a[i] && max1>a[i])
             {
             max2 = a[i];        
             }
     }
     cout<<"\nmax2 is "<<max2;
     
     max3 = a[0];
         for(i=0;i<n;i++)
     {
         if(max3<a[i] && max2>a[i] && max1>a[i])
             {
             max3 = a[i];        
             }
     }
     cout<<"\nmax3 is "<<max3;
     
    return 0;
}
