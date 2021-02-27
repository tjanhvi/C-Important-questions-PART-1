/*Write a C++ program to find the second lowest and
highest numbers in a given array*/

#include <iostream>

using namespace std;

int main()
{
    int n,i,a[50], s1, s2, l1, l2;
    
    cout<<"How many number you want to print ? \n";
    cin>>n;
    
    cout<<"Enter the number \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

cout<<"********Second smallest number**********";     
    s1 = a[0];
         for(i=0;i<n;i++)
     {
         if(s1>a[i])
             {
             s1 = a[i];  
             continue;
             }
     }
     s2 = a[0];
         for(i=0;i<n;i++)
     {
         if(s2>a[i] && s1!=a[i])
             {
             s2 = a[i];        
             }
     }
     cout<<"\ns2 is "<<s2;
    
cout<<"********Second largest number**********";     
      l1 = a[0];
         for(i=0;i<n;i++)
     {
         if(l1<a[i])
             {
             l1 = a[i];  
             continue;
             }
     }
     l2 = a[0];
         for(i=0;i<n;i++)
     {
         if(l2<a[i] && l1!=a[i])
             {
             l2 = a[i];        
             }
     }
     cout<<"\nl2 is "<<l2;
     
    return 0;
}
