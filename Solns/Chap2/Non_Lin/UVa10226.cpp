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
	int n; string s;
	cin>>n;
	getline(cin,s);
	getline(cin,s);
	while(n--){
		map<string,int> mp;
		double total=0;
		while(!cin.eof()){
			getline(cin,s);
			s[s.size()-1]=' ';
			if(s=="") break;
			auto it = mp.find(s);
			if(it==mp.end()) mp.insert({s,1});
			else (it->second)++;
			total++;
		}
		for(auto it=mp.begin(); it!=mp.end(); it++){ cout << it->first << setprecision(4) << fixed << (it->second*100)/total << endl;}
	}
}