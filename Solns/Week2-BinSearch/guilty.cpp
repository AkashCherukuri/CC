# include "bits/stdc++.h"
using namespace std;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, sa=0;
	double v;
	cin >> n >> v;
	vector<double> a(n), b(n);

	for(int i=0; i<n; i++) {cin >> a[i]; sa+=a[i];}
	for(int i=0; i<n; i++) cin >> b[i];

	for(int i=0; i<n; i++){
		double ing_nd = (a[i]/sa)*v;
		if(ing_nd>b[i]){
			v = (sa/a[i])*b[i];
		}
	}

	cout << v << endl;

	return 0;
}