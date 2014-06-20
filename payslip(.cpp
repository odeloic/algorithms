#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//a simple function to design a payslip for the customer
payslip( float pay_back, float debt, float newbalance)
{
char name[20];
int i;
cout<<"Enter your name: ";
gets(name);
cout<<"--------------------------------------------------------------------------------";
cout<<endl<<endl<<endl<<endl;
cout<<"Name: "<<name<<endl<<endl;
cout<<"Debt: "<<debt<<" Rwf."<<endl<<endl;
cout <<"New Balance: "<<newbalance<<" Rwf."<<endl<<endl;
cout<<"ToPay: "<<pay_back<<" Rwf."<<endl;
cout<<endl<<endl<<endl<<endl;
for(i=0; i<=2; i++)
{
cout <<"\t";
}
cout <<"Thank you Dear customer!"<<endl;

cout<<"--------------------------------------------------------------------------------";


}
main()
{
float payback;
float balance, new_balance, debt;
balance = 56;
debt = 20;
payback  = debt + 10;
new_balance = debt + balance;
payslip(payback, debt, new_balance);
}




