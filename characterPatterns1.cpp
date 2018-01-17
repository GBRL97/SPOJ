/*
Gabriel Nowak, 17.01.2018
Using two characters: . (dot) and * (asterisk) print a chessboard-like pattern.
The first character printed should be * (asterisk).
Input
You are given t < 100 - the number of test cases and for each of the test cases two positive integers:
l - the number of lines and c - the number of columns in the pattern (l, c < 100).
*/
#include<iostream>
#include<string>
using namespace std;


int main()
{
    int t;
    int l,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>l>>c;
        if(l>0 and l<100 and c>0 and c<100)
        {
            for(int j=0;j<l;j++)
            {
                for(int k=0;k<c;k++)
                {
                    if((k+j)%2==0)cout<<"*";
                    else cout<<".";
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}

