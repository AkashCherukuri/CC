# include "bits/stdc++.h"
using namespace std;

# define rep(i,a,b) for(int i=a; i<b; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> dat(n);
	vector<pair<int,int>> cnt(m+1) // Both inclusive!
	rep(i,0,n) cin >> dat[i];
	rep(i,0,m+1) {cnt[i].first = i; cnt[i].second = 0;}

	rep(i,0,n){
		if(dat[i]>m)
	}

	return 0;
}