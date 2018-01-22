/*
Gabriel Nowak, 17.01.2018
Given a sequence of 2*k characters,
 please print every second character from the first half of the sequence.
 Start printing with the first character.
*/
#include<iostream>
#include<string>
using namespace std;


int main()
{
    int t;
    cin>>t;
    string x;
    for(int i=0;i<t;i++)
    {
        cin>>x;
    if(x.length()/2>=1 and x.length()/2<=100)
    {
        for(int j=0;j<x.length()/2;j++)
        {
            if(j%2==0) cout<<x[j];
        }
        cout<<"\n";
    }
    }
    return 0;
}

