/* Gabriel Nowak, 18.01.2018
Compute the Minimum Bounding Rectangle (MBR) that surrounds the given set of 2D objects, i.e., the axis-aligned rectangle,
which contains all of the specified objects and is the one with minimum area among all rectangles with this property.
Seems correct, but SPOJ haven't give me max points :(
*/
#include<iostream>
using namespace std;

int main()
{
    int t,n,x1,y1,x2,y2,r,xr1,yr1,xr2,yr2;
    bool first;
    char obj;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        first = true;
        cin>>n;
        for(int i=0;i<n;i++)
        {
        cin>>obj;
        switch(obj)
        {
            case 'p':
                cin>>x1>>y1;
                if(first)
                {
                    xr1=x1;
                    xr2=x1;
                    yr1=y1;
                    yr2=y2;
                    first = false;
                }
                if(x1<xr1)xr1=x1;
                if(y1<yr1)yr1=y1;
                if(x1>xr2)xr2=x1;
                if(y1>yr2)yr2=y1;
                break;
            case 'c':
                cin>>x1>>y1>>r;
                if(first)
                {
                    xr1=x1-r;
                    xr2=x1+r;
                    yr1=y1-r;
                    yr2=y2+r;
                    first = false;
                }
                if(x1-r<xr1)xr1=x1-r;
                if(y1-r<yr1)yr1=y1-r;
                if(x1+r>xr2)xr2=x1+r;
                if(y1+r>yr2)yr2=y1+r;
                break;
            case 'l':
                cin>>x1>>y1>>x2>>y2;
                if(first)
                {
                    xr1=min(x1,x2);
                    xr2=max(x1,x2);
                    yr1=min(y1,y2);
                    yr2=max(y1,y2);
                    first = false;
                }
                if(min(x1,x2)<xr1)xr1=min(x1,x2);
                if(min(y1,y2)<yr1)yr1=min(y1,y2);
                if(max(x1,x2)>xr2)xr2=max(x1,x2);
                if(max(y1,y2)>yr2)yr2=max(y1,y2);
                break;

        }
        }
        cout<<xr1<<" "<<yr1<<" "<<xr2<<" "<<yr2<<endl;
    }

    return 0;
}
