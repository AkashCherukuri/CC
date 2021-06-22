# include "bits/stdc++.h"
using namespace std;

# define rep(i,a,b) for(int i=a; i<b; i++)

int main(){
	int n; cin >> n;
	vector<int> dat(n);
	rep(i,0,n) cin >> dat[i];

	int st = 0;
	bool ord = true;
	int x,y,z;

	rep(i,1,n){
		if(st==0){
			if(dat[i]>dat[i-1]){ st=1; x=i-1; }
			else if(dat[i]<dat[i-1]){ st=2; x=i-1; }
		}
		else if(st == 1){
			if(dat[i]<dat[i-1]){y=i-1; z=i; ord=false; break;}
		}
		else if(st == 2){
			if(dat[i]>dat[i-1]){y=i-1; z=i; ord=false; break;}
		}
	}

	if(ord==false) cout << 3 << endl << x+1 << " " << y+1 << " " << z+1 << endl;
	else cout << 0 << endl;
	
	return 0;
}