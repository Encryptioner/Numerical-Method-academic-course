#include<bits/stdc++.h>

using namespace std;

double value_of_f(double x,double y)
{
    return (x*x+y);
}
int main()
{
    int i;
    double x0,y0,h,X,n;
    double y[500]={0},x[500]={0},y1[500]={0};
    cout<<"\nEnter value of x0 and y0 which is initial condition for (dy/dx) = -y : \n";
    cin>>x0>>y0;
    cout<<"\nEnter value of h which will divide whole range equally = ";
    cin>>h;
    cout<<"\nEnter value of x for which we wanna find ans = ";
    cin>>X;
    n=((X)/(h));
    cout<<"\nNumber of equal part = "<<n<<endl;
    y[0]=y0,x[0]=x0;
    y[0]=y[0]+h*value_of_f(x[0],y[0]);
    x[1]=x[0]+h;
    cout<<"\ny1("<<0<<") = "<<y[1]<<endl;
    for(i=1;i<=n;i++)
    {
        y[i]=y[0]+(h/2)*(value_of_f(x[0],y[0])+value_of_f(x[1],y[i-1]));
        cout<<"\ny1("<<i<<") = "<<y[i]<<endl;
    }

    main();
    return 0;
}

