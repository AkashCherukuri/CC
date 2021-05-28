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

		int ar[] = {7,6,3,6,1,-5,10};
		int n = sizeof(ar)/sizeof(ar[0]);
		sort(ar, ar+n);

		rep(i,0,n) cout << ar[i] << " ";
		cout << endl;

		cout << binary_search(ar, ar+n, 1) << endl;
		cout << binary_search(ar, ar+n, 2) << endl;
}