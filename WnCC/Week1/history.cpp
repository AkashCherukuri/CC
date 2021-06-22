# include "bits/stdc++.h"
# include <algorithm>
using namespace std;

# define vii vector<pair<long long int,long long int>>
# define rep(i,a,b) for(long long int i=a; i<b; i++)

vector<long long int> tmp;

bool sfn(pair<long long int, int> arg1, pair<long long int, long long int> arg2){
	if(arg1.second < arg2.second) return true;
	else return false;
}

bool sfn2(pair<long long int, long long int> arg1, pair<long long int, long long int> arg2){
	if(arg1.first < arg2.first) return true;
	else return false;
}

int bin_search(long long int val, long long int L, long long int R, long long int sz){
	int mid = (L+R)/2;

	if(L==R){
		if(val < tmp[L]) return sz-L;
		else return sz-L-1;
	}

	if(val < tmp[mid]) return bin_search(val, L, mid, sz);
	else return bin_search(val, mid+1, R, sz);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;
	vector <long long int> t(n);
	tmp = t;

	vii dat(n);
	for (long long int i=0; i<n; i++) cin >> dat[i].first >> dat[i].second;

	sort(dat.begin(), dat.end(), sfn);

	// rep(i,0,n) cout << dat[i].first << " " << dat[i].second << endl;
	// cout << endl;

	long long int res = 0, it = 1;
	tmp[0] = (dat[0].first);

	rep(i,1,n){
		// cout << it << endl;
		if(dat[i].first > tmp[it-1]){
			tmp[it] = (dat[i].first);
			it++;
		}
		else{
			// cout << "In else: " << it << endl;
			// cout << tmp.size() << endl;
			// rep(i,0,it) cout << tmp[i] << " ";
			// cout << endl;
			int sol=bin_search(dat[i].first, 0, it, it);
			// cout << sol << endl;

			it = it-sol;
			// tmp.resize(tmp.size()-sol);
			tmp[it] = (dat[i].first);
			it++;
			res+=sol;
		}
	}

	cout << res << endl;

	return 0;
}