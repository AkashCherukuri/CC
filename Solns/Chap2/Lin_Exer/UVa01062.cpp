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

	string s; int k=0;
	while(true){
		cin>>s;
		if(s=="end") break;
		vector<stack<char>> sv;
		rep(i,0,s.size()){
			if(sv.size()==0){
				stack<char> tmp;
				tmp.push(s[i]);
				sv.push_back(tmp);
			}
			else{
				bool found=false;
				rep(j,0,sv.size()){
					if(sv[j].top()>=s[i]){
						sv[j].push(s[i]);
						found=true;
						break;
					}
				}
				if(!found){
					stack<char> tmp;
					tmp.push(s[i]);
					sv.push_back(tmp);					
				}
			}
		}
		printf("Case %d: %d\n",++k,(int)sv.size());
	}
}