#include<bits/stdc++.h>

using namespace std;

double given_function(double i)
{
    return 1/(1+i);
}
double actual(double i)
{
    return log(1+i);
}
int main()
{
    vector<double>x,y;
    double u,l,h,ans,pans,true_val,interval;
    int n,i;

    cout<<"Enter upper and lower limit of the function 1/(1+x) : ";
    cin>>u>>l;
    cout<<"Enter value of h which makes equal interval for upper and lower limit : ";
    cin>>h;
    interval=(fabs(u-l)/h)+1;
    cout<<"\nNumber of interval = "<<interval<<endl;
    x.push_back(l);
    y.push_back(given_function(l));
    for(i=1;i<interval;i++)
    {
        x.push_back(x[i-1]+h);
        y.push_back(given_function(x[i]));
    }
    cout<<"\n  x\t\t        y\n------------------------------------\n";
    for(i=0;i<interval;i++)
    {
        cout<<x[i]<<"\t\t    "<<y[i]<<endl;
    }


    ans=y[0]+y[interval-1];
    pans=0;
    for(i=1;i<interval-1;i++)
    {
        if(i%2!=0)
        {
            pans+=4*y[i];
        }
        else
        {
            pans+=2*y[i];
        }
    }
    //cout<<pans<<" "<<ans<<endl;
    ans+=pans;
    ans=(ans*h)/3;
    cout<<"\nIn Simpson 1/3 Rule : Numerical Integration of the function = "<<ans<<endl;
    true_val=actual(u)-actual(l);
    cout<<"\nActual Intregation value of the function = "<<true_val<<endl;
    printf("\nPercentage of error = %.4f %\n",(fabs(true_val-ans)/ans)*100);
    return 0;
}

