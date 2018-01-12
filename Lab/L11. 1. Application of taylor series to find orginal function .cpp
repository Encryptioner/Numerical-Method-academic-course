#include<bits/stdc++.h>

using namespace std;

double y1(double x,double y)
{
    return (x-y*y);
}
double y2(double x,double y)
{
    return (1-2*y*y1(x,y));
}
double y3(double x,double y)
{
    return (-2*y*y2(x,y)-2*y1(x,y)*y1(x,y));
}
double y4(double x,double y)
{
    return (-2*y*y3(x,y)-6*y1(x,y)*y2(x,y));
}
double y5(double x,double y)
{
    return (-2*y*y4(x,y)-8*y1(x,y)*y3(x,y)-6*y2(x,y)*y2(x,y));
}
int main()
{
    double x0,y0;
    cout<<"Enter x0 and y0 for the function y1=x-y*y  : ";
    cin>>x0>>y0;
    double y[10],x;
    double div[8]={1.0,1.0,2.0,6.0,24.0,120.0,720.0,5040.0};
    y[0]=y0;
    y[1]=y1(x0,y0);
    y[2]=y2(x0,y0);
    y[3]=y3(x0,y0);
    y[4]=y4(x0,y0);
    y[5]=y5(x0,y0);

    cout<<"\nEnter value of x : ";
    cin>>x;
    double ans=y[0];
    cout<<"\nderivative for the given function = "<<y[0]<<endl;
    for(int i=1;i<=5;i++)
    {
        cout<<"derivative "<<i<<" for the given function = "<<y[i]<<endl;
        ans+=(y[i]*pow(x,i))/div[i];
    }
    cout<<endl<<"y("<<x<<") = "<<ans<<endl;
    return 0;
}
