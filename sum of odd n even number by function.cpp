#include <iostream>

using namespace std;
 int sum_of_even_numbers(int n , int arr[50])
 {
       int rem, sum=0;
     for(int i=0;i<n;i++)
     {
    
     rem=arr[i]%2;
     if(rem==0)
         {
         sum=sum + arr[i];
         }
              }
              return sum;
 }
  
  int sum_of_odd_numbers(int n , int arr[50])
 {
       int rem, sum=0;
     for(int i=0;i<n;i++)
     {
   
     rem=arr[i]%2;
     if(rem!=0)
         {
         sum=sum + arr[i];
         }
              } 
              return sum;
    
 }

int main()
{
    int arr[50],n,i,even_number,odd_number;
    
    cout<<"Enter the length of the array:"<<endl;
    cin>>n;
    
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    even_number= sum_of_even_numbers(n ,arr);
    odd_number=sum_of_odd_numbers( n , arr);
    cout<<"Sum of even numbers :"<<even_number;
    cout<<"Sum of odd numbers :"<< odd_number;
    return 0;
}
