# General header copy-pasta
```C++
	

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

	    return 0;
	} 

```

# Tips and stuff for syntax

## Need to learn how to read strings properly!!
- `scanf()` with regex 
	- use endl on a seperate line when printing stuff of `char[]` used to read in `scanf()`; the output doesn't buffer otherwise.
	
	- use `getline()` to read an entire line. Always have `cin.ignore()` before using `getline()` for safety. **THIS DOESN'T WORK PROPERLY WHEN READING FROM A FILE?!**
	
	- Try doing the following:
	```C++
		
		# include <sstream>
		...
		string s;
		getline(cin, s);
		if(s=="") break;
	
		istringstream iss(s);
		// s has the values in format "12 15 13"; useful when a case terminates with blank line
		cin >> a >> b >> c;
	
	```

- To print upto a certain decimal place. The below code prints upto two decimal places.
	`cout << setprecision(2) << fixed;`

- Get size of array in C++
	`int n = sizeof(arr)/sizeof(arr[0]);`

- Bit operations are faster than operations on `vector<bool>` and `bool[]`
	To get the LSB which is ON; `T = (S & (-S))` as `-S` would be in 2's complement.
	Turn on all n rightmost bits; `T = (1<<n) - 1` .

# Important functions and stuff from C++ STL
- Sorting
	sort(first, last, `opn` comparator)		   -- sorts in increasing using `less<int>()` by default
	stable_sort(first, last, `opn` comparator) -- equal elements' relative position unchanged

- Searching (All are binary)
	binary_search(first, last, val, `opn` comparator) -- `True` if val is present, `False` otherwise. Assumes increasing by default
	lower_bound(first, last, val, `opn` comparator)	  -- index of the smallest number in range which is ≥ val.
	upper_bound(first, last, val, `opn` comparator)   -- index of the largest number in range which is < val. (not ≤)

- structures
	- stack 
		pop(), top(), push(), empty()
	- queue
		pop(), push(), front(), back(), empty()
	- deque -- similar to vector, can have stuff being added at the front as well
		push_back(), pop_front(), push_front(), pop_back()

	- BST = map, set; better for storing data and searching
	
	- Heap= priority_queue; better for finding max/min and stuff
		by default, the queue uses `less<int>()` to compare, and the values are in DECREASING ORDER
		push(), pop(), top(), emplace() ???
	
	- Hash Table = unordered_map

