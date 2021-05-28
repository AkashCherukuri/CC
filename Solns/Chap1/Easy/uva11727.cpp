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
	
	int k,c=0;
	cin >> k;
	while(k--){
		int x,y,z,t;
		cin >> x >> y >> z;
		if((x<y && y<z)||(z<y && y<x)) printf("Case %d: %d\n", ++c, y);
		if((y<x && x<z)||(z<x && x<y)) printf("Case %d: %d\n", ++c, x);
		if((x<z && z<y)||(y<z && z<x)) printf("Case %d: %d\n", ++c, z);
	}
}