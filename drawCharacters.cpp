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
    cin>>t;//ammount of tests
    string x;//text on we are working 
    for(int i=0;i<t;i++)
    {
        cin>>x;
        if(x.length()/2>=1 and x.length()/2<=100)// 1<=k<=100 - exercice's condition
        {
            for(int j=0;j<x.length()/2;j+=2) cout<<x[j];//we are iterating only every second letter until half of the string
            cout<<"\n";// every new test in the new line
        }
    }
    return 0;
}

