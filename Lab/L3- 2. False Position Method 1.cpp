#include<bits/stdc++.h>

using namespace std;

double a=2,b=3,y=0;

double value_of_f(double x)
{
    double f;
    f=x*x*x-2*x-5;
    return f;
}

double value_of_xr(double a,double b,double fa,double fb)
{
    double xr;
    xr=(a*fb-b*fa)/(fb-fa);
    return xr;
}

double check()
{
    double fa,fb,xr,f;
    int f1,c1;
    y++;

    cout<<y<<". "<<a<<" "<<b<<endl;

    fa=value_of_f(a);
    fb=value_of_f(b);
    xr=value_of_xr(a,b,fa,fb);
    f=value_of_f(xr);
    //f1=(int)(f);
    cout<<"xr = "<<xr<<endl<<endl;
    if(f<0)
    {
        a=xr;
    }
    else
    {
        b=xr;
    }
    return xr;
}

int main()
{
    double xi,xj,c;

    xi=check();
    while(1)
    {
        xj=check();
        c=xi-xj;

        if(c<0)
        {
            c=c*(-1);
        }
        if(c<.0001)
        {
            break;
        }
        xi=xj;
    }
    cout<<"\n\nFinal root = "<<xj;
    cout<<"\nstep needed = "<<y<<endl;

    return 0;
}
