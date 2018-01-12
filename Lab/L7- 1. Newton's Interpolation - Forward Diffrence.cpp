#include<bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int f;
    if(num==1)
    {
        return 1;
    }
    else
    {
        f=num*factorial(num-1);
        return f;
    }
}

int main()
{
    int n,i,j,count=1;
    double x[10],y[10],z[10][10],p,h,X,P,ans;

    cout<<"How many value of x u wanna input? ";
    cin>>n;
    cout<<"1st Enter Value of x and then it's corresponding y=f(x) :\n";
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        z[0][i]=y[i];
    }
    h=fabs(x[1]-x[0]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-count;j++)
        {
            z[count][j]=fabs(z[count-1][j]-z[count-1][j+1]);
        }
        count++;
    }
    count=1;
    cout<<"\nx(i) y(i) y1(i) y2(i) y3(i) y4(i)";
    cout<<"\n---------------------------------\n---------------------------------\n";
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<" "<<y[i]<<" ";
        for(j=0;j<n-count;j++)
        {
            cout<<z[i+1][j]<<" ";
        }
        cout<<"\n\n";
        count++;
    }
    cout<<"Enter value of x for desired f(x) = ";
    cin>>X;
    p=(X-x[0])/h;
    count=1;
    ans=y[0];
    for(i=1;i<n;i++)
    {
        P=p;
        for(j=1;j<i;j++)
        {
            P*=p-j;
        }
        ans+=(P*z[i][0])/factorial(count);
        count++;
    }
    cout<<"\n ans f(x) = "<<ans<<endl;
    return 0;
}
