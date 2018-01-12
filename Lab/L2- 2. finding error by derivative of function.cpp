#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
double x,y,z,dx,dy,dz,u,u1,u3,u2,umax,er,ep;

x=y=z=1;
dx=dy=dz=.001;

u=(5*x*y*y)/(z*z*z);

u1=abs((5*y*y*dx)/(z*z*z));
u2=abs((10*x*y*dy)/(z*z*z));
u3=abs((15*x*y*y*dz)/(z*z*z*z));

umax=u1+u2+u3;

er=umax/u;
ep=er*100;

cout<<"Absolute error = "<<umax<<endl;
cout<<"Relative error = "<<er<<endl;
cout<<"Percentage error = "<<ep<<endl;

return 0;
}

