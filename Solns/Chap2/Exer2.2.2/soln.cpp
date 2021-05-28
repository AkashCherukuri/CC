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

int modulo(int n1, int n2){
	// N2 is a power of 2
	return (n2-1)&n1; 
}

void is_power(int n1){
	int x = n1&(-n1);
	if(x==n1) cout << "The number is a power of 2!" << endl;
	else cout << "The number is not a power of 2!" << endl;
	return;
}

int turn_off(int n){
	return (~(n&(-n)))&n;
}

int turn_on(int n){
	return (n+1)|n;
}

int con_turn_off(int n){
	return (n+1)&n;
}

int con_turn_on(int n)
{
	return (n-1)|n;
}
int main(int argv, char* argc[]){
	fast
	cout << modulo(7,4) << endl;
	is_power(7);
	is_power(4);
	cout << turn_off(40) << endl;
	cout << turn_on(41) << endl;
	cout << con_turn_off(39) << endl;
	cout << con_turn_on(36) << endl;
}