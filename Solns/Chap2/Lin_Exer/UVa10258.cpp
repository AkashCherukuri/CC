# include "bits/stdc++.h"
# include <cmath>
# include <algorithm>
# include <sstream>
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

struct tripl{
	int t,ps=0,tp=0;

};

bool lt(tripl arg1, tripl arg2){
	if(arg1.ps<arg2.ps || ((arg1.ps==arg2.ps)&&arg1.tp>arg2.tp)) return true;
	else return false;
}

int main(int argv, char* argc[]){
	fast

	int n; string s;
	cin >> n;
	bool first = true;
	while(n--){
		if(first) first=false;
		else cout << endl;
		cin.ignore();
		getline(cin,s);
		// cout << "Getline done!" << endl;
		int t,p,tim;
		vector<tripl> lb(102);
		rep(i,0,102) lb[i].t=i;
		// cin.ignore();
		while(getline(cin,s)){
			if(s=="") break;
			istringstream iss(s);
			cin >> t >> p >> tim >> s;
			// cout << t << p << tim << s << endl;
			if(s=="I")	lb[t].tp+=tim+20;
			else if(s=="C"){
				lb[t].tp+=tim;
				lb[t].ps+=1;
				// cout << "C" << endl;
			}
			// cin.ignore();
		}
		sort(lb.begin(),lb.end(),lt);
		for(int i=101; i>=0; i--){
			if(lb[i].ps==0) break;
			else printf("%d %d %d\n",lb[i].t,lb[i].ps,lb[i].tp);			
		}
	}
}