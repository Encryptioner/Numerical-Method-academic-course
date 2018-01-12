#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,count=1,x=50;
    double min,ans,c;
    printf("In ramanujan's method f(x)=[1-(a1x+a2x^2+.....)]\n\nHere a1,a2,..,an  is the co-efficient of x. Here, you have to input the number of co-efficient of x and the value of this co efficient.\n");
    printf("\nEquation = x^3-6x^2+11x-6=0 and f(x)=(1-(11x-6x^2+x^3)/6)\n\n");
    cout<<"Enter how many values of a in ramanujan's function f(x) format = ";
    cin>>n;
    //vector<double>a(n+1);
    //vector<double>b(n+2);
    vector<double>a(x+1);
    vector<double>b(x+2);
    for(i=1;i<=n;i++)
    {
        /*cin>>x;
        a[i]=x/6.0;*/
        cin>>a[i];
    }
    for(i=(n+1);i<=x;i++)
    {
        a[i]=0;
    }
    n=x;
    b[1]=1;
    for(i=2,j=1;i<=(n+1);i++)
    {
        b[i]=0;
        k=j;
        for(j=1;j<=(i-1);j++)
        {
            b[i]+=a[j]*b[k];
            k--;
        }
    }
    min=b[1]/b[2];
    cout<<"\n"<<count<<". root = "<<min<<endl;
    for(i=2;i<=n;i++)
    {
        ans=b[i]/b[i+1];
        cout<<++count<<". root = "<<ans<<endl;
        c=min-ans;
        if(c<0)
        {
            c=c*(-1);
        }
        if(c<.0001)
        {
            cout<<"\nans = "<<ans<<endl;
            break;
        }
        else
        {
            min=ans;
        }
    }
    cout<<"\nFinal Root = "<<ans<<endl;
    return 0;
}
