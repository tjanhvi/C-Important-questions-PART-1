/*WAP which will ask the user to enter his/her marks(out of 100)
Define a function that will display grades according to marks enter as below.

Marks    grades
91-100    AA
81-90     AB
71-80     BB
61-70     BC
51-60     CD
41-50     DD
<=40      Fail */

#include<iostream>
using namespace std;

float mark(float);

int main()
{
float marks;

cout<<"Enter your marks(out of 100): ";
cin>>ws>>marks;

if(marks>100)
cout<<"Invalid marks!!"<<endl;
else
mark(marks);

return(0);
}

float mark(float x)
{
if(x>90)
cout<<"Grade - AA"<<endl;
else if(x>80 && x<=90)
cout<<"Grade - AB"<<endl;
else if(x>70 && x<=80)
cout<<"Grade - BB"<<endl;
else if(x>60 && x<=70)
cout<<"Grade - BC"<<endl;
else if(x>50 && x<=60)
cout<<"Grade - CD"<<endl;
else if(x>40 && x<=50)
cout<<"Grade - DD"<<endl;
else if(x<=40)
cout<<"Grade - Fail"<<endl;

}
