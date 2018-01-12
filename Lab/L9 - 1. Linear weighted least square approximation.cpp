#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,i,x[10],y[10],summationx=0,summationy=0,summationxy=0,summationx2=0,p;
    double a,b,X,Y,ans,w;
    printf("Enter how many values : ");
    cin>>n;
    printf("\nEnter the values of x and it's corresponding y :\n");
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    cout<<"\nEnter value of w : ";
    cin>>w;
    cout<<"\nEnter it's position : ";
    cin>>p;
    cout<<"\nx[i]  y[i]  w[i]  wx[i]  wx2[i]  wy[i]  wxy[i]\n";
    for(i=0;i<n;i++)
    {
        if(i!=p-1)
        {
        summationx=summationx +x[i];
        summationx2=summationx2 +x[i]*x[i];
        summationy=summationy +y[i];
        summationxy=summationxy +x[i]*y[i];

        cout<<x[i]<<"     "<<y[i]<<"     "<<"1     "<<summationx<<"     "<<summationx2<<"     "<<summationy<<"     "<<summationxy<<endl;
        }
        else
        {
        summationx=(summationx +x[i])*w;
        summationx2=(summationx2 +x[i]*x[i])*w;
        summationy=(summationy +y[i])*w;
        summationxy=(summationxy +x[i]*y[i])*w;

        cout<<x[i]<<"     "<<y[i]<<"     "<<w<<"     "<<summationx<<"     "<<summationx2<<"     "<<summationy<<"     "<<summationxy<<endl;
        }
    }

    a=((summationx2*summationy -summationx*summationxy)*1.0/(n*summationx2-summationx*summationx)*1.0);

    b=((n*summationxy-summationx*summationy)*1.0/(n*summationx2-summationx*summationx)*1.0);

    printf("\n\nThe linear least squares approximation is Y= %.5f + %.5f X",a,b);
    a=floor(a*100000)/100000;
    b=floor(b*100000)/100000;

    printf("\n\nEnter value of desired x : ");
    cin>>X;
    ans=a+b*X;
    cout<<"\nans = "<<a+b*X<<endl;
    cout<<"\nEnter real value of corresponding y : ";
    cin>>Y;
    cout<<"\nPercentage of error = "<<((max(Y,ans)-min(Y,ans))/Y)*100<<"%"<<endl;
    return(0);
}
