#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
double ea1,ea2,ea3,min=0;
double x=pow(3,-1);

cout<<x<<endl;

ea1=abs(x-.3);
ea2=abs(x-.33);
ea3=abs(x-.34);

//printf("%.4lf\n",x);
//cout<<x<<" "<<ea1<<" "<<ea2<<" "<<ea3<<endl;
min=ea1;
if(ea2<ea1)
{
min=ea2;
if(ea3<ea2)
{
min=ea3;
}
}
else if(ea3<ea1)
{
min=ea3;
}

if(min==ea1)
{
cout<<"Best solution is .3\n";
}
else if(min==ea2)
{
cout<<"Best solution is .33\n";
}
else
{
cout<<"Best solution is .34\n";
}
return 0;
}
