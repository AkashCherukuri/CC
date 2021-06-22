# include "bits/stdc++.h"
using namespace std;

# define lli long long int

vector<lli> dcor;
vector<pair<lli,lli>> bcor;

bool sort_inc(pair<lli,lli> a, pair<lli,lli> b){
	if(a.first < b.first) return true;
	return false;
}

int bin_search(lli L, lli R, lli val){
	lli mid = (L+R)/2;
	// cout << L << " " << mid << " " << R << endl;
	if(L==R) return L;
	if(R-L==1){
		if(abs(val-dcor[L])<abs(val-dcor[R])) return L;
		else return R;
	}
	if(R-L==2){
		if(abs(val-dcor[L])<abs(val-dcor[mid])) return L;
		else return mid;
	}

	if(dcor[mid]<val) return bin_search(mid, R, val);
	else return bin_search(L, mid+1, val);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int d, b; cin >> d >> b;

	vector<lli> dtmp(d);
	vector<pair<lli,lli>> btmp(b);

	dcor = dtmp; bcor = btmp;

	for(int i=0; i<d; i++) {cin >> dcor[i];}
	for(int i=0; i<b; i++) cin >> bcor[i].first >> bcor[i].second;

	sort(dcor.begin(), dcor.end());
	sort(bcor.begin(), bcor.end(), sort_inc);

	// for(int i=0; i<d; i++) cout << dcor[i] << endl;
	// cout << endl;
	// for(int i=0; i<b; i++) cout << bcor[i].first << " " << bcor[i].second << endl;
	// cout << endl;

	// Greedy strat: Choose the dog with least co-ordinate for every food bowl

	int idx_b = 0, res = 0;
	while(idx_b!=bcor.size() && res!=d){
		// cout << bcor[idx_b].first << endl;
		int cl_d = bin_search(0,dcor.size(),bcor[idx_b].first);
		if(abs(dcor[cl_d]-bcor[idx_b].first)<=bcor[idx_b].second){
			res++;
			dcor.erase(dcor.begin()+cl_d);
		}
		idx_b++;
	}
	cout << res << endl;

	return 0;
}