/* Gabriel Nowak, 18.01.2018
You are given two alphanumeric ASCII strings. An ancient manuscript says those strings contain a hidden password. Decode it!

The first string may be grouped into tuples of six characters each.
For each such 6-tuple, taking from the i-th character (start counting from 0)
the i-th bit of its ASCII code gives you a number (call it a),
and likewise taking the (i+3 mod 6)-th bits gives you another number (call it b).

These two numbers tell you about the next two characters to be included in the password,
namely the a-th and the b-th character from the second string (count starting from 0 as usual).

Link to the problem: http://www.spoj.com/problems/HS12HDPW/
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void resetArray(int tab[], int s)
{
    for(int i=0;i<s;i++)tab[i]=0;
}
void convertToBin(int x, int bin[])//converting decimal number to binary
{
    int i=0;
    while(x>0)
    {
        bin[i]=x%2;
        x/=2;
        i++;
    }
}
int convertToDecimal(int bin[])//converting binary number to decimal
{
    int x=0;
    for(int i=0;i<8;i++) x=x+bin[i]*pow(2,i);
    return x;
}

int main()
{
    int t,n,first,second;
    int buf;
    int binary[8];
    int a[8];
    int b[8];
    string strings[101];
    string password="";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        password="";//preparing for next test
        for(int j=0;j<=n;j++)//<= because we give n strings which length is 6 but there is one more 64 length (from at the end we choose letters)
        {
            cin>>strings[j];//array of n+1 strings (last one strings[n] is using at the end)
        }
        for(int j=0;j<n;j++)//iteration of every string
        {
            resetArray(a,8);//preparing for next iteration
            resetArray(b,8);
            for(int k=0;k<strings[j].length();k++)//iteration of every letter of string, every letter is convert to binary
            {
                buf=strings[j][k];
                resetArray(binary,8);//preparing for conversion
                convertToBin(buf,binary);
                a[k]=binary[k];//we are choosing correct bits to a and b
                b[k]=binary[(k+3%6)%6];
            }
            first=convertToDecimal(a);//converting a and b to decimals and we give indexes we have to use to choose correct letter from strings[n]
            second=convertToDecimal(b);
            password=password+strings[n][first]+strings[n][second];//concatenating our actual password
        }
        cout<<password<<endl;

    }

    return 0;
}

