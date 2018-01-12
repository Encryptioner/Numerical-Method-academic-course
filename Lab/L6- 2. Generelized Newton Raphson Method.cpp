#include<bits/stdc++.h>

using namespace std;
double value_of_f(double x)
{
    double f;
    f=x*x*x-x*x-x+1;
    return f;
}
double value_of_f1(double x)
{
    double f1;
    f1=3*x*x-2*x-1;
    return f1;
}
double value_of_f2(double x)
{
    return 6*x-2;
}
double value_of_xr(double x)
{
    double xr;
    xr=x-2*(value_of_f(x)/value_of_f1(x));
    return xr;
}
double value_of_xr2(double x)
{
    double xr;
    xr=x-(value_of_f1(x)/value_of_f2(x));
    return xr;
}
double check(double xo,double xi)
{
    double xr,xr2,c;
    int y=0;
    while(1)
    {
    xr=value_of_xr(xo);
    xr2=value_of_xr2(xo);
    cout<<++y<<". "<<xr<<" "<<xr2<<endl<<endl;
    //c=xr-xi;
    c=xr-xr2;
    if(c<0)
    {
        c=c*(-1);
    }
    if(c<.0001)
    //if(fabs(c)<.0001)
    {
        cout<<"\nFinal root 1 = "<<xr<<endl;
        cout<<"\nFinal root 2 = "<<xr2<<endl;
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
    double xo,v,w;
    cout<<"Enter approximate root xo = ";
    cin>>xo;
    printf("\n");
    v=check(xo,0);
    //cout<<"..........................\n";
    //w=check2(xo,0);
    /*cout<<"\nFinal root 1 = "<<v<<endl;
    cout<<"\nFinal root 2 = "<<w<<endl;*/
    return 0;
}
