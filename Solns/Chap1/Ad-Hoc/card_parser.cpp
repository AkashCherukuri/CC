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
# define msi map<string, int>
# define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

using namespace std;

int main(int argv, char* argc[]){
		fast

		msi mp;
		string suit[] = {"D", "C", "H", "S"}, num[] = {"2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K", "A"};
		int c=0;
		rep(i,0,4) rep(j,0,13) mp[suit[i]+num[j]] = (c++);
		



}