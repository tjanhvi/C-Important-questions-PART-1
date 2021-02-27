
#include <iostream>

using namespace std;

int main()
{
    int A[7]={4,8,6,9,5,2,7};
    int n=7, sum=0;
    
    for(int i=0;i<7;i++){
    sum=sum +A[i];
    }
    cout<<"sum is"<<sum;
    
    return 0;
}
