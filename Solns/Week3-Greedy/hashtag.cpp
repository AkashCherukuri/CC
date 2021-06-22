# include "bits/stdc++.h"
using namespace std;

# define rep(i,a,b) for(int i=a; i<b; i++)

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;
	vector<string> dat(n);
	rep(i,0,n) cin >> dat[i];

	// I/O done
	for(int i=n-1; i>0; i--){
		int x = min(dat[i-1].size(), dat[i].size());
		rep(j,1,x){
			if(dat[i-1][j]!=dat[i][j]){
				x = j;
				break;
			}
		}
		if(x == dat[i-1].size() || dat[i-1][x]<dat[i][x]) continue;
		dat[i-1].resize(x);

	}

	rep(i,0,n) cout << dat[i] << endl;

	return 0;
}