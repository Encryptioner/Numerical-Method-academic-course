#include<bits/stdc++.h>

using namespace std;

double h;

double value_of_f(double x,double y)
{
    return 3*x+(y/2);
    //return 1+y*y;
}
double value_of_k1(double x,double y)
{
    return (h*value_of_f(x,y));
}
double value_of_k2(double x,double y)
{
    return h*value_of_f((x+h/2),(y+(value_of_k1(x,y)/2)));
}
double value_of_k3(double x,double y)
{
    return h*value_of_f((x+h/2),(y+(value_of_k2(x,y)/2)));
}
double value_of_k4(double x,double y)
{
    return h*value_of_f((x+h),(y+value_of_k3(x,y)));
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
    k[3]=value_of_k3(x0,y0);
    k[4]=value_of_k4(x0,y0);
    cout<<"\nk1 = "<<k[1]<<"\nk2 = "<<k[2]<<"\nk3 = "<<k[3]<<"\nk4 = "<<k[4]<<endl<<endl;
    ans=y0+(k[1]+2*k[2]+2*k[3]+k[4])/6;
    v=i*h;
    cout<<"y("<<v<<") = ";//<<ans<<endl;
    printf("%.8f\n",ans);
    //cout<<v<<" "<<X<<endl;
    x0=v;
    y0=ans;
    }
    main();
    return 0;
}
