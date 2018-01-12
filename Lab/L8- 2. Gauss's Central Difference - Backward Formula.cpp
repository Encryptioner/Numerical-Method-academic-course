#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,count,n1,c;
    double x[10],y[10],z[10][10],m[10],G[10],p,h,X,ans;

    cout<<"How many value of x u wanna input? ";
    cin>>n;
    cout<<"1st Enter Value of x and then it's corresponding y=f(x) :\n";
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
        z[0][i]=y[i];
    }
    count=1;
    h=fabs(x[1]-x[0]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-count;j++)
        {
            //z[count][j]=floor(fabs(z[count-1][j]-z[count-1][j+1])*100000)/100000;
            z[count][j]=fabs(z[count-1][j]-z[count-1][j+1]);
        }
        count++;
    }
    count=1;
    c=0;
    n1=n-1;
    cout<<"\nx(i)   y(i)   y1(i)   y2(i)   y3(i)   y4(i)   y5(i)   y6(i)";
    cout<<"\n-------------------------------------------------------------\n---------------------------------\n";
    for(i=0;i<n;i++)
    {
        printf("%.4f %.4f ",x[i],y[i]);
        for(j=1;j<=n1;j++)
        {
            printf("%.4f ",z[j][c]);
            //cout<<z[j][c]<<" ";
        }
        c++;
        n1--;
        cout<<"\n\n";
        count++;
    }
    if(n%2!=0)
    {
        n1=(n+1)/2;
    }
    else
    {
        n1=n/2;
    }
    m[0]=floor(z[0][n1-1]*100000)/100000;
    c=1;
    count=1;
    for(i=n1-2;i>=0;i--)
    {
        m[c]=floor(z[count][i]*100000)/100000;
        //cout<<c<<" "<<count<<i<<" "<<m[c]<<" "<<z[count][i]<<endl;
        m[++c]=floor(z[++count][i]*100000)/100000;
        //cout<<c<<" "<<count<<i<<" "<<m[c]<<" "<<z[count][i]<<endl;
        ++count;
        ++c;
    }
    if(n%2!=0)
    {
        c=c-1;
    }
    else
    {
        m[c]=floor(z[count][i]*100000)/100000;
    }
    for(i=0;i<=c;i++)
    {
        cout<<i<<" ";
        printf("%.4f\n",m[i]);
    }
    cout<<"\nEnter value of x for desired f(x) = ";
    cin>>X;
    p=(X-x[n1-1])/h;
    cout<<"\n"<<(X-x[n1-1])<<" "<<h<<" "<<p<<endl<<endl;
    G[1]=p;
    G[2]=(p*(p+1))/2;
    G[3]=G[2]*((p-1)/3);
    for(i=4;i<=c;i++)
    {
        G[i]=G[i-1]*((p+(i-2))/i);
    }
    for(i=1;i<=c;i++)
    {
        cout<<i<<" ";
        printf("%.8f\n",G[i]);
    }
    count=1;
    ans=m[0];
    for(i=1;i<=c;i++)
    {
        //cout<<i-1<<" "<<m[i-1]<<" "<<G[i-1]<<" "<<ans<<endl;
        ans+=m[i]*G[i];
    }
    cout<<"\n ans f(x) = "<<ans<<endl;
    return 0;
}

