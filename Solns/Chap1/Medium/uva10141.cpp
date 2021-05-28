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


	int k;
	while(scanf("%d", &k), (k!=0)){

		string pos = "+x";
		while(--k){
			char rot[3];
			scanf("%s", rot);
			// cout << inp << endl;
			if(pos=="+x" && rot!="No")	pos = rot;
			else if(pos=="-x"){
				if(rot=="+y") pos = "-y";
				else if(rot=="-y") pos = "+y";
				else if(rot=="+z") pos = "-z";
				else if(rot=="-z") pos = "+z";
			}
			else if(pos=="+y"){
				if(rot=="+y") pos = "-x";
				else if(rot=="-y") pos = "+x";
				else pos = "+y";
			}
			else if(pos=="-y"){
				if(rot=="+y") pos = "+x";
				else if(rot=="-y") pos = "-x";
				else pos = "-y";
			}
			else if(pos=="+z"){
				if(rot=="+z") pos = "-x";
				else if(rot=="-z") pos = "+x";
				else pos = "+z";
			}
			else if(pos=="-z"){
				if(rot=="+z") pos = "+x";
				else if(rot=="-z") pos = "-x";
				else pos = "-z";
			}
		}
		cout << pos << endl;
	}
}