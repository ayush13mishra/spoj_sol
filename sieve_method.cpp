#include<iostream>
using namespace std;
void sieveprime(int *p);


int main()
{
    int count,N[20],n;
    cin>>n;
    for(int i=0;i<=n;i++)N[i]=i; 
    count=sieveprime(N);
    for(int i=2;i<=20;i++)cout<<N[i]<<",";

    return 0;
}

void sieveprime(int *p)
{
    for(i=2;i<=20;i++)p[i]=1;
    for(i=2;i<=20;i++)
    {
        if(p[i])
        {
            for(int j=2*i;j<=20;j+=i)p[j]=0;
        }
    }
}

