# include "bits/stdc++.h"
using namespace std;

// Singly linked list, stores int
struct sing_node{
	int val;
	sing_node *next = nullptr;
};

class single_list{
	sing_node *head;
	int sz;

public:
	single_list(){
		sz = 0;
		head = nullptr;
	}

	~single_list(){
		auto it = head;
		while(it!=nullptr){
			sing_node *tmp = it->next;
			delete it;
			it = tmp;
		}
	}

	void add(int k){
		sing_node *nhead = new sing_node();
		nhead->next = head;
		nhead->val = k;
		head = nhead;
		sz++;
	}

	void print(){
		auto it = head;
		while(it!=nullptr){
			cout << it->val << endl;
			it = it->next;
		}
	}

	void get_size(){
		cout << this->sz << endl;
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	single_list a;
	a.add(2);
	a.add(3);
	a.add(5);
	a.print();
	a.get_size();

	return 0;
}