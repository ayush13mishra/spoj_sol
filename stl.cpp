#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int main()
{
	int m;
	cin>>m;
	char select[m];
	string names[m];
	int S[m],P[m];
	vector <int> S1,P1;  
	for(int i=0;i<m;i++)
	{
	cin>>select[i]>>names[i]>>S[i]>>P[i];
	S1.push_back(S[i]);
	P1.push_back(P[i]);
	sort(S1.begin(),S1.end());
	int start=-1,end;
	for(int j=1;j<i;j++)
	{
		if((S1[j]==S1[j-1])&&start<0)
			start=j;
		else if(S1[j]==S1[j-1])
			continue;
		else
		{
			end=j-1;
			sort(P1.begin()+start,P1.begin()+end);
			end=0;
			start=-1;
		}
	}
	for(int k=0;k<=i;k++)cout<<S1[k]<<" "<<P1[k]<<endl;
	}

return 0;
	
}