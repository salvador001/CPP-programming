#include<iostream>

#include<math.h>

using namespace std;

int main()

{

float a,b,c;

cout<<"Enter the coefficient of x square : "; cin>>a;

cout<<"Enter the coefficient of x : ";

cin>>b;

cout<<"Enter the constant : ";

cin>>c;

float d;
 
d=(b*b)-(4*a*c);

if(d>=0)

{

float m1=((-b)+sqrt(d))/(2*a);

float m2=((-b)-sqrt(d))/(2*a);

cout<<"Roots are : "<<m1<<","<<m2;

}

else

cout<<"No Real Roots";

}
