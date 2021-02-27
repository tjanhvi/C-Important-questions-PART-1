/*A person is eligible to vote iif his/her age is greater than or equal to 18
Define a function to find out if he/she is eligible to vote.*/

#include<iostream>
using namespace std;

int vote(int);

int main()
{
unsigned int age;

cout<<"Enter your age: "<<endl;
cin>>ws>>age;

vote(age);

return 0;
}

int vote(int x)
{
    if(x>18)
    cout<<"Congrats! You are eligible to cast your vote."<<endl;
    else
    cout<<"OOPS! You still have to wait "<<18-x<<" years to cast your vote."<<endl;
}
