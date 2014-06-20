#include<iostream.h>  //Author: Manzi I.ode Loic
#include<conio.h>

 avg(float a,float b)
{
  float sum;
  float avrg;                  

 cout <<"Enter two numbers: "<<endl;
 cin >>a >>b;

 sum = a + b;
 avrg = sum / 2;
 clrscr();

 cout <<"Their average is: "<<avrg;
 return avrg;

}
main()
{
  float x, y;
  avg(x, y);
}


