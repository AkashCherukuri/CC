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

float ht(float u, float f, float d, int n){
	float res = u*((1-pow(1-f,n))/(f))-n*d;
	// cout << res << " " << n << endl;
	return res;
}

int main(int argv, char* argc[]){
	fast

	float u, d, h, f;
	while(scanf("%f %f %f %f",&h,&u,&d,&f), (h!=0)){
		f = f/100;
		int n = log(d/u)/log(1-f);
		// cout << n << " " << log(d/u)/log(1-f) << endl;
		if(ht(u,f,d,n)<h){
			while(ht(u,f,0,n)>0){
				n++;
			}
			printf("failure on day %d\n", n);
		}
		else{
			while(ht(u,f,d,n)>h){
				n--;
			}
			printf("success on day %d\n", n);
		}
	}	
}