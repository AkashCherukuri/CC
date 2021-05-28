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

	int s,p;
	while(scanf("%d %d",&s,&p),(s||p)){
		int x,y,t=sqrt(p);
		if(t*t==p){x=t;y=t;}
		else{
			if((t^1)&1) t-=1;
			p-=(t*t)+1;
			t+=2;
			if(p<(t-1)){y=t;x=t-1-p;}
			else if(p<(2*t-4)){x=1; y=2*t-2-p;}
			else if(p<(3*t-5)){y=1; x=p-2*t+4;}
			else{x=t; y=p-3*t+5;}
		}
		int ad = (s-t)/2;
		x+=ad; y+=ad;
		printf("Line = %d, column = %d\n",y,x);
	}
}