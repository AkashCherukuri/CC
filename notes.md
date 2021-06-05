# Index
1. [Header](#general-header-copy-pasta)
2. [STL](#important-functions-and-stuff-from-c++-stl)

3. [Data Structures](#data-structures)
	- [Graphs](#graphs)
	- [UFDS](#union-find-disjoint-sets)
	- [Segment Tree](#segment-tree)

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


# Data Structures

## Graphs

Graphs can be stored in one of three ways:
- Adjacency Matrix; int matrix of VxV dimensions. Useful for dense matrices only.

- Adjacency Lists; `vector<vector<pair<int,int>>>`
	Very useful, and the most used. Very efficient to find the number of neighbours of a vertex.

- Edge List; `vector<pair<int, pair<int,int>>>`
	Can easily store edges sorted in some order, helpful in cases such as Kruskal's
	Finding neighbours is not efficient though.

## Union Find Disjoint Sets

This data structure is used to efficiently maintain and perform various operations on disjoint sets. 

Maintain two vectors, `height` and `p`. We essentially have a tree for a disjoint set whose root node is the "representative" of this set. For any int `i`, `p[i]` is the parent node in the tree, and the root node has `p[i]=i`.

To find the union of two sets, we check the heights of both trees and make the root node of the one with lesser height a child of the other root node.

To check whether two values are in the same set, traverse until root is found, and compare the values for both. This process can be sped up by linking all the nodes encountered in the path to the root node.

## Segment Tree

This is useful for finding the max/min in a given range of a 1D matrix, whose values are updated frequently. If the values are static, a dynamic programming solution is better.

The tree is represented by a vector, where the left child of node `i` is given by `2i` and the right child is given by `2i+1` (Node 0 is ignored, root node is idx=1). Let the array have range \[0:n\] (size is n+1). The root node of segment tree has value of max/min value in range 0:n. The left node similarly looks at range 0:n/2, and right node at n/2+1:n.

(in 0:n/2, both are inclusive.)

The tree is constructed from the bottom up. A query \[i:j\] is handled as follows:
1. Start at the root node
2. Check if the range is equal to range of current node. If yes, return; if no, then continue.
3. If the left child is intersecting with given range, call the function here and let the result be `p1`. Similarly define for right as `p2`. (If not intersecting with one node then the other will be the answer)
4. If `p1<p2`, then return `p1`; else return `p2`. (For minimum)

If the array is updated, then we traverse the tree and update the appropriate node values (the ones which encompass the updated index) if the value of new elementis smaller than the value stored.


## Fenwick Tree

This is used for efficient computation of the cumulative frequency of data dynamic in nature. (That is, the data is frequently updated) Slight modification can be used to get the sum of elements within a given range.

Let `n` be the number of intervals and `m` be the number of data points. We create an array called `ft` of size `n+1` (and ignore idx=0).

i'th element of this array corresponds to the total elements belonging to intervals in range \[i-LSB(i)+1,i\] (both inclusive). LSB is the least significant one in binary rep of i, and is given by `i&(-i)`.

To get the cumulative frequency from start till index `j`, `cum(j)`, sum the values of ft\[j\], ft\[f-LSB(j)\], ...
Similarly, `cum(i,j)`, that is between i and j, is given by `cum(j)-cum(i)`.

Now assume that the j'th interval is modified **BY** `k` (that is, `k` new data points have been added which belong to the j'th interval). Then, we add `k` to each of ft\[j\], ft\[j+LSB(j)\], ...

Both operations take O(Logn) time.
