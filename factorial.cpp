/* Gabriel Nowak, 18.01.2018
Program which counts zeros at the right side of factorial (n!)
Too slow, need optimalisation
*/
#include<iostream>
using namespace std;
int counter(int x, int &twos, int &fives)//my idea is to count twos and fives from every factor of factorial 
{
    while(x%10==0)
    {
        x/=10;
        fives++;
        twos++;
    }
    while(x%5==0)
    {
        x/=5;
        fives++;
    }
    while(x%2==0)
    {
        x/=2;
        twos++;
    }
}
int main()
{
    int t,n,zeros,twos,fives,tmp;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        twos=0;
        fives=0;
        zeros=0;
        cin>>n;
        for(;n>1;n--)
        {
            counter(n,twos,fives);
        }
        zeros=min(twos,fives);
        cout<<zeros<<endl;
    }
    return 0;
}
