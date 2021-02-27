/*
#include <iostream>

using namespace std;

int main()
{
    int A[]={'A',66,'c',68};
    
    for(char x:A)//we ure auto,int,char,float...
    cout<<x<<endl;

    return 0;
}
*/

#include<iostream>

using namespace std;

int main(){
    
    int A[100];
    
    for(int x:A){ //for each x in A
        cout<<++x;
    }
}
/*#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"enter";
        cin>>arr[i];
    }
     for(int i=0;i<10;i++)
    {
        cout<<"enter\n";
        cout<<arr[i];
    }
    
}*/