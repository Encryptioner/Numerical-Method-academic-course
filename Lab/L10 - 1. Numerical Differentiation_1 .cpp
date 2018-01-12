#include<bits/stdc++.h>//wrong
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
    double x[10],y[10],h,z[10][10],p,X,P,ans;

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
    double dy_dx=0.0, dy_dx2=0.0,d_dx, xo,yo, Yx;
 //h = 0.2;

cout<<"\n\nFor forward formula :";
 dy_dx = (1/h)*( z[1][0] - (0.5*z[2][0]) + ((1/3)*z[3][0]) - ((1/4)*z[4][0]) + ((1/5)*z[5][0]) - ((1/6)*z[6][0]) );
 dy_dx2 = (1/(h*h))*(z[2][0] -z[3][0] +( (1/12)*z[4][0] - ( (5/6)*z[5][0] ) ));

 cout<<"\ndy_dx = "<<dy_dx<<"  dy_dx2 = "<<dy_dx2<<endl<<endl;
    return 0;
}

