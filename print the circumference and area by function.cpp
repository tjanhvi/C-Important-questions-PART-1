/*Write a program to print the circumference and area 
of a circle of radius entered by user by defining your
 own function*/
 
 #include<iostream>

 using namespace std;
 
 float circumference(float radius);
  float area(float radius);
 
  float circumference(float radius)
 {
 	return (2*3.14*radius);
  }
 
  
  float area(float radius)
  {
  	return (3.14*radius*radius);
  	  }
 
    int main()
 {
    float radius;
    
    cout<<"Enter the value of radius: "<<endl;
    cin>>radius;
    
    cout<<"Circumference of the circle is: "<<circumference(radius)<<endl;
    cout<<"Area of the circle is: "<<area(radius)<<endl;
 	return 0;
 }
