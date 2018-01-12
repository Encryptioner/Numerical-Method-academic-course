#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
float ea1,ea2,ea3,x1,x2,x3,ep;

x1=pow(3,0.5);
x2=pow(5,0.5);
x3=pow(7,0.5);

//cout<<1.7321-x1<<endl;
ea1=fabs(1.7321-x1);
ea2=fabs(2.2361-x2);
ea3=fabs(2.6458-x3);

//cout<<x1<<" "<<x2<<" "<<x3<<" "<<endl<<ea1<<" "<<ea2<<" "<<ea3<<endl;

cout<<"\nSum of absolute error = ";
printf("%.5lf\n",ea1+ea2+ea3);

cout<<"Sum of relative error = ";
//<<(ea1/x1)+(ea2/x2)+(ea3/x3)<<endl;
printf("%.5lf\n",(ea1/x1)+(ea2/x2)+(ea3/x3));

ep=((ea1/x1)+(ea2/x2)+(ea3/x3))*100;

cout<<"Sum of percentge error = ";
//<<ep<<endl;
printf("%.5lf\n",ep);

return 0;
}
