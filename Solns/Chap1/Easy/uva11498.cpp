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

	int k, x,y;
	while(scanf("%d", &k), (k!=0)){
		scanf("%d %d", &x, &y);
		int xt, yt;
		while(k--){
			scanf("%d %d", &xt, &yt);
			if(xt==x || yt==y) printf("divisa\n");
			else if(xt>x){
				if(yt>y) printf("NE\n");
				else printf("SE\n");
			}
			else if(xt<x){
				if(yt>y) printf("NO\n");
				else printf("SO\n");
			}
		}
	}	
}