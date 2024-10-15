#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num1,num2;
char oper;
cout<<"Enter two numbers:"<<endl;
cin>>num1>>num2;
cout<<"Enter an operator:"<<endl;
cin>>oper;
switch(oper){
case '+':
cout<<"Sum:"<<num1+num2;
break;
case '-':
cout<<"Difference:"<<num1-num2;
break;
case '*':
cout<<"Product:"<<num1*num2;
break;
case '/':
cout<<"Division:"<<float(num1)/num2;
break;
case '%':
cout<<"Modulus:"<<num1%num2;
break; 
case '^':
cout<<"Power:"<<pow(num1,num2);
break;
case 's':
cout<<"Square root of num1:"<<sqrt(num1)<<"\t"<<"Square root of num2:"<<sqrt(num2);
break;
default:
cout<<"Invalid operator";


}

}