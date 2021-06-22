# include "bits/stdc++.h"
using namespace std;

# define rep(i,a,b) for(int i=a; i<b; i++)

bool comp(pair<int,int>a, pair<int,int>b){
	if(a.second<b.second) return true;
	else if((a.second==b.second) and (a.first<b.first)) return true;
	else return false;
}

int main(){
	int n,g,l,t;
	scanf("%d %d %d %d",&n,&g,&l,&t);

	vector<pair<int,int>> cars(n);
	vector<int> diff(g+1), tmp(g);

	rep(i,0,n) cin >> cars[i].first >> cars[i].second;
	sort(cars.begin(), cars.end(), comp);

	
	rep(i,0,g) cin >> tmp[i];
	sort(tmp.begin(), tmp.end());
	diff[0] = tmp[0];
	int tp = diff[0];
	rep(i,1,g){
		diff[i] = tmp[i]-tmp[i-1];
	}
	diff[g] = l-tmp[g-1];
	// cout << endl;
	// cout << "Gaps: ";
	// rep(i,0,g+1){
	// 	cout << diff[i] << " ";
	// }
	// cout << endl << endl;
	// rep(i,0,n){
	// 	cout << cars[i].first << " " << cars[i].second << endl;	}
	// 	cout << endl;
	int rec = -1;
	bool final = false;
	int lf=0, r=n, mid;
	while(lf<=r){
		mid = ((lf+r)>>1);
		if(cars[mid].first > rec && rec!=-1) continue;
		// cout << "Checking car with cost: " << cars[mid].first << endl;
		int cap = cars[mid].second;
		double time = 0;
		bool reach=true;
		rep(j,0,g+1){
			if(diff[j]<=cap/2.0) time+=diff[j];
			else time+=3.0*diff[j]-cap;
			// cout << time << " ";
			if(diff[j]>cap || time>t){reach=false; break;}
		}
		if(reach){
			if(rec==-1) rec=cars[mid].first;
			else rec = min(rec, cars[mid].first);
			r = mid;
			if (lf==r) break;
		}
		else{
			lf = mid+1;
			if(final || lf>=n) break;
			if (lf==r) final = true;
		}
		// cout << endl;
	}	
	// cout << endl;
	cout << rec << endl;

	return 0;
}