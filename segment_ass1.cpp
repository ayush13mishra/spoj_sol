//coding segment trees

#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
int tree[400005];
int arr[100005];


void build_tree(int node, int a,int b)
{
	if(a==b)
	{
	tree[node]=arr[a];
	return;
	}
int mid=(a+b) >> 1;
build_tree(node*2,a,mid);

build_tree(node*2 + 1, mid + 1 ,b);

tree[node]=min( tree[node*2] ,tree[node*2+1] ) ;

}

int query_tree(int node,int a,int b,int i,int j){
	
	if(a>b||a>j||b<i)				//doesnt overlap
		return INT_MAX;
	
	if(a>=i && b<=j)					//complete overlap
	{
		
	return tree[node];}

	int mid=(a+b) >> 1;				//partially overlap
	
	int q1=query_tree(node*2,a,mid,i,j);
	
	int q2=query_tree(node*2+1,mid+1,b,i,j);
	
	return min(q1,q2);
}

int main()
{
	int t;
	cin>>t;
	for(int p=0;p<t;p++)
	{
		int q,no,lower,upper;
		cin>>no>>q;
	
		int result[q];
		for(int i=0;i<no;i++)cin>>arr[i];
		build_tree(1,0,no-1);

	
for(int j=0;j<q;j++){
	cin>>lower>>upper;
	result[j]=query_tree(1,0,no-1,lower-1,upper-1);}
	
cout<<"scenario #"<<p+1<<":"<<endl;
				
				
for(int k=0;k<q;k++)
	cout<<result[k]<<endl;
	
		//cout<<"\n";       
  

	
   }	
	return 0;
}