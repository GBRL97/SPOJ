/* Gabriel Nowak, 19.01.2018
Given two circles: O1 with the center o1 = (xo1, yo1) and a radius r1 and O2 with the center o2 = (xo2, yo2) and radius r2,
please compute if O1 is inside O2 or if O2 is inside O1
*/
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int t,x1,y1,x2,y2,r1,r2;
    double dist;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        if(r1<r2)swap(r1,r2);
        if(dist<r1-r2)cout<<"I"<<endl;
        else if(dist==r1-r2)cout<<"E"<<endl;
        else cout<<"O"<<endl;
    }
    return 0;
}
