#include<iostream>
#include<math.h>
using namespace std;
long fact(int a)
{
	int p=1;
	for(int i=1;i<=a;i++)p*=i;
	return p;
}
int main()
{
	long n;
	//probablity of no having diferent birthday=(365pn)*365^n
	cin>>n;
	long numerator,denominator;
	numerator=fact(365);
	denominator=fact(365-n);
	//formula
	long q=(numerator/denominator)*pow(365,n);
	
	//probablity of same birthday
	cout<<1-q;
	
	return 0;	
}