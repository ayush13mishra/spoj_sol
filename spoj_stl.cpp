#include<iostream>
#include<map>

using namespace std;
int main()
{
	int n,num1,num2,str;
	cin>>n;
	map <pair<int,int> ,string> mp[n];
	for(int i=0;i<n;i++)
	{
		cin>>num1>>num2>>str;
		mp[i].insert(pair<pair <int,int>,string>((num1,num2),str));
	}
}