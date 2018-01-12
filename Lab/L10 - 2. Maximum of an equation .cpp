#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    float del1[20],del2[20],del3[20],del4[20],del5[20],del6[20],h,derv1=0,derv2=0,p=0,X,Y;

    printf("\n\n How many input u want to take : ");
    scanf("%d",&n);
    printf("\n\n Enter values x and y: \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    //printf("\n\n The table you entered is as follows :\n\n");
    cout<<"\nX \t Y"<<endl;
    for(i=0; i<n; i++)
    {
        printf("%0.3f\t%0.3f",x[i],y[i]);
        printf("\n");
    }
   h=x[1]-x[0];
  ;
   cout<<"\nh = "<<h<<endl;
   cout<<"\n";
   for(i=0;i<n-1;i++)
   {
   del1[i]=y[i+1]-y[i];
   //cout<<"\t"<<del1[i];
   }
 cout<<"\n";
    for(i=0;i<n-2;i++)
   {
   del2[i]=del1[i+1]-del1[i];
   //cout<<"\t"<<del2[i];
   }
 cout<<"\n";
//cout<<del1[0]<<del2[0]<<endl;
  p=.5*((((-2)*del1[0]/del2[0]))+1);
  cout<<"p=:";
  cout<<p<<endl;
  X=x[0]+p*h;
  cout<<"X=:";
  cout<<X<<endl;
  Y=y[n-1]-(.2*del1[n-2])+(((-.2)*(-.2+1))/2)*del2[n-3];
  cout<<"Y=:";
  cout<<Y<<endl;

  getchar();
}


