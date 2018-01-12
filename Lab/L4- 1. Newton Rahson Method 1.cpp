#include<bits/stdc++.h>

using namespace std;
double value_of_f(double x)
{
    double f;
    f=x*x*x-2*x-5;
    return f;
}
double value_of_f1(double x)
{
    double f1;
    f1=3*x*x-2;
    return f1;
}
double value_of_xr(double x)
{
    double xr;
    xr=x-(value_of_f(x)/value_of_f1(x));
    return xr;
}
double check(double xo,double xi)
{
    double xr,c;
    int y=0;
    while(1)
    {
    xr=value_of_xr(xo);
    cout<<++y<<". "<<xi<<" "<<xr<<endl<<endl;
    c=xr-xi;
    if(c<0)
    {
        c=c*(-1);
    }
    if(c<.0001)
    {
        return xr;
        break;
    }
    else
    {
        xi=xr;
        xo=xi;
    }
    }
}
int main()
{
    double xo,v;
    cout<<"Enter approximate root xo = ";
    cin>>xo;
    printf("\n");
    v=check(xo,0);
    cout<<"\nFinal root = "<<v<<endl;
    return 0;
}
