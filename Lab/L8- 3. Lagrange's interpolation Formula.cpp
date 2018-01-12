#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    double x[10],y[10],X,ans,m;

    cout<<"How many value of x u wanna input? ";
    cin>>n;
    cout<<"1st Enter Value of x and then it's corresponding y=f(x) :\n";
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    cout<<"\nEnter value of x for desired f(x) = ";
    cin>>X;
    ans=0;
    for(i=0;i<n;i++)
    {
        m=1;
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                m*=(X-x[j])/(x[i]-x[j]);
            }
        }
        ans+=m*y[i];
    }
    cout<<"\nans = "<<ans<<endl;
    return 0;
}
