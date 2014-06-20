#include<iostream.h>        //Author: Manzi I.Ode loic
int main()
{
int i = 101, sum =0;
while(i < 200)
{
if (i % 7 ==0)
{
cout << i <<" "<<"is divisible by 7" <<endl;
sum  += i;

}
i += 1;
}

cout <<"the sum of numbers divisible by 7 is "<<sum;
return 0;

}
