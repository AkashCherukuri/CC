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
	while(scanf("%d", &k)!=EOF){
		int b=0, n=k, arr[k];
		while(k--)	scanf("%d", &arr[n-k-1]);
		rep(i,0,n-1){
			int diff = abs(arr[i]-arr[i+1])-1;
			if(b&(1<<diff)){
				cout << "Not Jolly" << endl;
				break;
			}
			else b|=(1<<diff);
		}		
		if((b+1)&(1<<(n-1))) cout << "Jolly" << endl;
	}
}