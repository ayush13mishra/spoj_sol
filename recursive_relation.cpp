#include< iostream >
using namespace std;
typedef long long ll;
#define MOD 1000000000

ll k;
vector <ll> b;
vector <ll> a;
vector <ll> c;

//multiplication

vector < vector <ll> > mul(vector< vector<ll> >A,vector< vector<ll> >B)
{
	vector<vector<ll> >C(k+1,vector<ll>(k+1));
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			for(int p=0;p<k;p++)
				C[i][j])=(C[i][j]+A[i][k]*B[k][j])%MOD;
		}
	}
	return C;
}

//exponentiation of matrix

int main ()
{
ll k,n;
ll c[k],	
}