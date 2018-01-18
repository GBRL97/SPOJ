/*
Gabriel Nowak, 17.01.2018
Peter wants to generate some prime numbers for his cryptosystem.
Help him! Your task is to generate all prime numbers between two given numbers
*/
#include<iostream>
using namespace std;
bool isPrime(int x)// return true if parameter is prime number
{
    if(x==1)return false;
    if(x==2 or x==3)return true;
    for(int i=2;i*i<=x;i++)// the algorithm ends when we will come to i=sqrt(x)
    {
        if(x%i==0) return false;// if we found even one divider then false
    }
    return true;
}
void findPrime(int a, int b)// finding and printing all prime numbers in the range [a,b] by using previous function isPrime
{
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i)) cout<<i<<endl;
    }
}

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        findPrime(a,b);
        cout<<"\n";
    }
    return 0;
}
