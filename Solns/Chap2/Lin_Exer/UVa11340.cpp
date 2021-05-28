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

	cout << setprecision(2) << fixed;
	int n,k,ln;
	double cst;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&k);
		map<char, double> cost;
		char let;  
		while(k--){
			scanf("%s %lf",&let,&cst);
			cost[let]=cst;
		}
		scanf("%d",&ln);
		double res=0;
		while(ln--){
			string line="";
			// Getline doesn't work when piping inputs! Look into this!
			getline(cin,line);
			rep(i,0,line.size()){
				auto it = cost.find(line[i]);
				if(it!=cost.end()) res+=it->second;
			}
		}
		cout << res << "$" << endl;
	}
}