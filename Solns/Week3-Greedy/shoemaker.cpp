# include "bits/stdc++.h"
using namespace std;

bool inc(pair<pair<double,double>,int> a, pair<pair<double,double>,int> b){
	double f1 = a.first.second/a.first.first, f2 = b.first.second/b.first.first;
	if(f1>f2) return true;
	else if(f1==f2 && a.second < b.second) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;

	for(int j=0; i<n; j++){
		int k; cin >> k;
		vector<pair<pair<double,double>,int>> dat(k);
		for(int i=0; i<k; i++){cin >> dat[i].first.first >> dat[i].first.second; dat[i].second=i+1;}

		sort(dat.begin(), dat.end(), inc);

		for(int i=0; i<k; i++) cout << dat[i].second << endl;
	}

	return 0;
}