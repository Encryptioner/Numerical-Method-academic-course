#include<bits/stdc++.h>
using namespace std;

int main(){
double z[7][8], v=0.0, w=0.0, p ;

int i;
for(i=0;i<7;i++){
    for(int j =0; j<7; j++){
            z[i][j]=0.0;
    }
}
cout<<"Enter the values of x  and y:\n";
for( i = 0; i<7; i++){

    cin>>z[i][0]  ;
    cin>>z[i][1] ;
}

cout<<"\nx "<<"\t"<<" y"<<endl;
cout<<"-------\t-------"<<endl;

for( i = 0; i<7; i++){
    cout<<z[i][0]<<"\t"<<z[i][1]<<endl;
}

cout<<endl<<endl;

for(i=0; i<6; i++){
    v=z[i][1];
    w=z[i+1][1];
    z[i][2] = w-v;
}

for(i=0; i<5; i++){
       v=z[i][2];
    w=z[i+1][2];
    z[i][3] = w-v;

}

for(i=0; i<4; i++){
        v=z[i][3];
    w=z[i+1][3];
    z[i][4] = w-v;

}

for(i=0; i<3; i++){
        v=z[i][4];
    w=z[i+1][4];
    z[i][5] = w-v;

}

for(i=0; i<2; i++){
        v=z[i][5];
    w=z[i+1][5];
    z[i][6] = w-v;

}

for(i=0; i<1; i++){
        v=z[i][6];
    w=z[i+1][6];
    z[i][7] = w-v;

}

cout<< "x "<<"\t"<<"y "<<"\t"<<" dy1 "<<"\t"<<" dy2 "<<"\t"<<" dy3 "<<"\t"<<" dy4 "<<"\t"<<" dy5 "<<"\t"<<" dy6 "<<endl<<endl;
for(i=1;i<7;i++){
    z[i][7]=0.0;
}
for(i=0;i<7;i++){
    for(int j =0; j<8; j++){
        cout<<z[i][j]<<"\t";
    }
    cout<<endl;
}

 double h, dy_dx=0.0, dy_dx2=0.0,d_dx, xo,yo, x, Yx;
 h = 0.2;

cout<<"\n\nFor forward formula :";
 dy_dx = (1/h)*( z[1][2] - (0.5*z[1][3]) + ((1/3)*z[1][4]) - ((1/4)*z[1][5]) + ((1/5)*z[1][6]) - ((1/6)*z[1][6]) );
 dy_dx2 = (1/(h*h))*(z[1][3] -z[1][4] +( (1/12)*z[1][5] - ( (5/6)*z[1][6] ) ));

 cout<<"\ndy_dx = "<<dy_dx<<"  dy_dx2 = "<<dy_dx2<<endl<<endl;

/*p = fabs(0.5* (1- ( z[1][2]/z[1][3] )));
cout<<" p = "<<p<<endl;
 cout<<"Enter value of Xo & Yo ";
 cin>>xo>>yo;
 x = xo + p*h;
 cout<<"x = "<<x<<endl;


 Yx = yo + p*z[1][2] + 0.5*(p*(p-1))*z[1][3];
 cout<<"\nYx = "<<Yx<<endl;*/


}


