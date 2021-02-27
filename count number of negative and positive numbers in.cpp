/*count number of negative and positive numbers in
array*/

#include <iostream>
using namespace std;

int main()
{
    int n,i,array[10];
    int positive_num =0, negative_num=0;
    
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
      {
      cin>>array[i];
      }
   
     for(i=0;i<n;i++)
     {
       if(array[i]>0)
           {
           positive_num++;
           }
       else 
           {
           negative_num++;
           }
     }
    cout<<"Positive numbers are"<<positive_num<<endl;
    cout<<"negative numbers are"<<negative_num;


    return 0;
}
