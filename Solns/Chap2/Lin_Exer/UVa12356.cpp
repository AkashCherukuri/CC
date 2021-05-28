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

	int s,b;
	while(scanf("%d %d",&s,&b), (s||b)){
		bool sold[s];
		rep(i,0,s) sold[i]=true;
		while(b--){
			int l,r;
			scanf("%d %d",&l,&r);
			l--; r--;
			rep(i,l,r+1) sold[i] = false;
			bool fl=false, fr=false;
			while(l--) if(sold[l]){ fl=true; cout<<l+1<<" "; break; }
			if(!fl) cout<<"* ";
			while((++r)<(s)) if(sold[r]){ fr=true; cout<<r+1<<endl; break; }
			if(!fr) cout<<"*"<<endl;
		}
		cout << "-" << endl;
	}
}