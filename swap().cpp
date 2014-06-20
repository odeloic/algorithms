#include<iostream.h>   //Author : Manzi I.Ode Loic
swap(int a, int b)
{
	int temp;

	cout <<"Enter two numbers: "<<endl;
	cin >>a >>b;
	cout <<"a is "<<a <<"\n"<<"b is " <<b <<endl;
	temp = b;
	b = a;
	a = temp;
	cout <<"a is now "<<a <<endl <<"and b is now: "<<b;



}
main()
{
int x;
int y;
swap(x, y);
}