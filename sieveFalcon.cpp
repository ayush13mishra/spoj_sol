#include<iostream>
using namespace std;
void sieveprime(int *p);


int main()
{
    int N[20],n;
    cin>>n;
    for(int i=0;i<=n;i++)N[i]=i; 
    sieveprime(N);
    for(int i=0;i<=20;i++)cout<<N[i]<<",";

    return 0;
}

void sieveprime(int *p)
{
    for(int j=2;j<=20;j++)p[j]=1;
    for( int k=2;k<=20;k++)
    {
        if(p[k])
        {
            for(int l=2*k;l<=20;l+=k)p[l]=0;
        }
    }
}

