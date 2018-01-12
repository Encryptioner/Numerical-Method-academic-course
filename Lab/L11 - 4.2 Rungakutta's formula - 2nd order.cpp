#include<bits/stdc++.h>

using namespace std;

double h;

double value_of_f(double x,double y)
{
    //cout<<y-x<<endl;
    return 3*x+(y/2);
}
double value_of_k1(double x,double y)
{
    return (h*value_of_f(x,y));
}
double value_of_k2(double x,double y)
{
    return h*value_of_f((x+h),(y+(value_of_k1(x,y))));
}

int main()
{
    double x0,y0,k[10],ans,X,v;
    cout<<"Enter value of x0 and y0 for (dy/dx) = y-x function : \n";
    cin>>x0>>y0;
    cout<<"Enter value of h = ";
    cin>>h;
    cout<<"Enter value of desired x : ";
    cin>>X;
    v=0;
    for(int i=1;v<X;i++)
    {
    k[1]=value_of_k1(x0,y0);
    k[2]=value_of_k2(x0,y0);
    cout<<"\nk1 = "<<k[1]<<"\nk2 = "<<k[2]<<endl<<endl;
    ans=y0+(k[1]+k[2])/2;
    v=i*h;
    cout<<"y("<<v<<") = "<<ans<<endl;

    x0=v;
    y0=ans;
    //cout<<x0<<" "<<y0<<endl;
    }
    main();
    return 0;
}

