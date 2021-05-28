# include "bits/stdc++.h"
# include <cmath>
# include <algorithm>
# include <cstring>
# include <cstdio>

# define vi vector<int>
# define vvi vector<vi>
# define pi pair<int, int>
# define vii vector<pi>
# define rep(i,a,b) for(int i=a; i<b; i++)
# define ll long long int
# define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

using namespace std;

int main(int argv, char* argc[]){
	fast

	int N;
	while(scanf("%d",&N)!=EOF){
		vi val(1<<N), pot(1<<N);
		rep(i,0,1<<N){scanf("%d",&val[i]); pot[i]=0;}
		// Calculate potencies
		rep(i,0,1<<N) for(int j=1; j<(1<<N); j=j<<1) pot[i]+=val[i^j];
		// Calculate max values
		int res=0;
		rep(i,0,1<<N) for(int j=1; j<(1<<N); j=j<<1) res=max(res,pot[i]+pot[i^j]);
		cout << res << endl;
	}
}