#include<bits/stdc++.h>
using namespace std;

int main(){
    double x[10], y[10], z[10][10];
    int i, n, j;
    double sum_of_x=0.0, sum_of_y=0.0, sum_of_xy=0.0, sum_of_x2=0.0, Ao=0.0, A1=0.0,A2=0.0,val, val1,Y, sum_of_x3=0.0, sum_of_x4 = 0.0, sum_of_x2y=0.0;

    cout<<"How many input u want to take ? : ";
    cin>>n;
    cout<<"\nEnter the value of X and Y :\n";
    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        z[i][0] = x[i];
        z[i][1] = y[i];
    }

    for(i=0; i<n; i++)
    {
        z[i][2] = x[i]*x[i];
        z[i][3] = x[i]*y[i];
        z[i][4] = x[i]*x[i]*x[i];
        z[i][5] = x[i]*x[i]*x[i]*x[i];
        z[i][6] = x[i]*x[i]*y[i];
    }

    for(i=0; i<n; i++)
    {
        sum_of_x += x[i];
        sum_of_y += y[i];
        sum_of_x2 += z[i][2];
        sum_of_xy += z[i][3];
        sum_of_x3 += z[i][4];
        sum_of_x4 += z[i][5];
        sum_of_x2y += z[i][6];
    }

    cout<<"\n"<<"X"<<" \t "<<" Y "<<" \t "<<" X2 "<<" \t "<<"XY"<<" \t "<<"X3"<<" \t "<<"X4"<<" \t "<<"X2Y"<<endl<<endl;
    for(i=0; i<n;i++)
    {
        for(j=0; j<7;j++)
        {
            cout<<z[i][j]<<" \t ";
        }
        cout<<endl;
    }

    cout<<"\n"<<sum_of_x<<" \t "<<sum_of_y<<" \t "<<sum_of_x2<<" \t "<<sum_of_xy<<" \t "<<sum_of_x3<<" \t "<<sum_of_x4<<" \t "<<sum_of_x2y;

    double dit = 1.0/4.0;

    Ao = dit*( (sum_of_x*(sum_of_x3*sum_of_x2y- sum_of_xy*sum_of_x4)) -(sum_of_x2*(sum_of_x2*sum_of_x2y-sum_of_x3*sum_of_xy )) +(sum_of_y*(sum_of_x2*sum_of_x4 - sum_of_x3*sum_of_x3))  );
    A1 = -dit*( (sum_of_x*(sum_of_x2y*sum_of_x3 - sum_of_x4*sum_of_xy)) -(sum_of_x2*(sum_of_x2y*sum_of_x - sum_of_x2*sum_of_xy)) +(sum_of_y*(sum_of_x4*sum_of_x - sum_of_x2*sum_of_x3))   );
    A2 = dit*( (sum_of_x*(sum_of_x2*sum_of_x2y - sum_of_x3*sum_of_xy)) -(sum_of_x*(sum_of_x2y*sum_of_x - sum_of_x2*sum_of_xy)) +(sum_of_y*(sum_of_x3*sum_of_x - sum_of_x2*sum_of_x2))   );

    cout<<"\n\nAo = "<<Ao<<"   A1 = "<<A1<<"   A2 = "<<A2<<endl;

    cout<<"\n\nThe desired equation is  y = "<<Ao<<" + "<<A1<<"x  + "<<A2<<"x2"<<endl;
    cout<<"\nEnter a value of x and y for the equation  y = "<<Ao<<" + "<<A1<<"x  + "<<A2<<"x2 "<<endl;
    cin>>val>>val1;
    Y = Ao + A1*val+ A2*val*val;
    cout<<"\nY = "<<Y<<endl;
    cout<<"\n\nerror is "<<fabs((Y-val1)/val1)*100<<" %"<<endl;

    return 0;
}




