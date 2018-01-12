#include<bits/stdc++.h>

using namespace std;

double value_of_f(double x)
{
    //return (x*x*x-5)/2;//this will happen a infinite loop..
    return pow((2*x+5),(1/3.0));
}
double value_of_f1(double x)
{
    return (3*x*x)/2;
}
double check(double xo)
{
    double xi,xr,c;
    int y=0;
    xi=value_of_f(xo);
    while(1)
    {
        xr=value_of_f(xi);
        cout<<++y<<". "<<xi<<" "<<xr<<endl;
        c=xi-xr;
        if(c<0)
        {
            c=c*(-1);
        }
        if(c<.001)
        {
            return xr;
            break;
        }
        else
        {
            xi=xr;
        }
    }
}
int main()
{
    double a,b,x,v;
    /*while(1)
    {
        cout<<"Enter approximate value for which differentiation of function is less than 1 = ";
        cin>>a;
        b=value_of_f1(a);
        if(b<1 && b>-1)
        {
            break;
        }
    }*/
    cout<<"Enter approximate value = ";
    cin>>a;
    v=check(a);
    cout<<"\nFinal root = "<<v<<endl;
    return 0;
}
