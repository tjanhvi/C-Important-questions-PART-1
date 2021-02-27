
#include <iostream>

using namespace std;

int main()
{
   int A[50],n,maximum_number,minimum_number;
   
   cout<<"Enter the number of element in the array:\n";
   cin>>n;
   
   cout<<"Entered elements:";
   for(int i=0;i<n;i++){
       cin>>A[i];
   }
   
   maximum_number = A[0];
   
    for(int i=0;i<n;i++){
        if(maximum_number<A[i]){
            maximum_number=A[i];
   }
    }
   cout<<"maximum_number\n";
   cout<<maximum_number;
   
   minimum_number = A[0];
  
  for(int i=0;i<n;i++){
        if(minimum_number>A[i]){
            maximum_number=A[i];
   }
    } 
    cout<<"\nminimum_number\n";
   cout<<minimum_number;
   
    return 0;
}
