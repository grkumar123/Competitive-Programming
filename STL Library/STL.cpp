#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <climits>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

// Total 12 containers
// 1. Vectors
// 2. List
// 3. Dequeue
// 4. Stack (LIFO)
// 5. Queue (FIFO)
// 6. Priority Queue
// 7. Set
// 8. Multiset
// 9. Unordered Set
// 10. Map
// 11. Multimap
// 12. Unordered Map

//Pairs
void ExplainPairs()
{
	pair<int, int> p = {1, 3};
	cout << p.first << " " << p.second << endl;

	pair<int, pair<int, int>> p = {1, {3, 4}};
	cout << p.first << " " << p.second.first << " " << p.second.second << endl;

	pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
	cout << arr[0].first << endl;
	cout << arr[0].second << endl;
	cout << arr[1].first << endl;
	cout << arr[1].second << endl;
	cout << arr[2].first << endl;
	cout << arr[2].second << endl;
}

//Vectors
void ExplainVectors()
{
	vector<int> v;
	v.push_back(1);
	v.emplace_back(2);

	vector<pair<int, int>> v;
	v.push_back({1, 2});
	v.emplace_back(1, 2);

	vector<int> v(5, 100);
	vector<int> v(5);

	vector<int> v1(5, 20);
	vector<int> v2(v1);

	vector<int>::iterator it = v.begin();

	it++;
	cout << *(it) << " ";

	vector<int>::iterator it = v.end();
	vector<int>::iterator it = v.rend();
	vector<int>::iterator it = v.begin();

	cout << v[0] << " " << v.at(0);
	cout << v.back() << " ";

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << " ";
	}

	for(auto it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << " ";
	}

	for(auto it = v)
	{
		cout << it << " ";
	}

	// {10, 20, 12, 23}
	v.erase(v.begin()+1);

	// {10, 20, 12, 23, 35}
	v.erase(v.begin()+2, v.begin()+4); // // {10, 20, 35} [Start, End]

	// Insert Function
	vector<int> v(2, 100); // {100, 100}
	v.insert(v.begin(), 300); // {300, 100, 100}
	v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

	vector<int> copy(2, 50); // {50, 50}
	v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

	// {10, 20}
	cout << v.size(); // 2

	// {10, 20}
	cout << v.pop_back(); // {10}

	// v1-> {10, 20}
	// v2-> {30, 40}
	v1.swap(v2); // v1-> {30, 40}, v2-> {10, 20}

	v.clear(); // Erase the entire vector

	cout << v.empty();
}

//List
void ExplainList()
{
	list<int> ls;

	ls.push_back(2); // {2}
	ls.emplace_back(4); // {2, 4}

	ls.push_front(5); // {5, 2, 4}
	ls.emplace_front(); // {2, 4}

	// Rest functions are same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}

//Dequeue
void ExplainDequeue()
{
	dequeue<int> dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1, 2}
	dq.push_front(4); // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	dq.pop_back(); // {3, 4, 1}
	dq.pop_front(); // {4, 1}

	// Rest functions are same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
}

//Stack
void ExplainStack()
{
	stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(3); // {3, 3, 2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}

	cout << st.top(); // prints 5 "** st[2] is invalid **"

	cout << st.top(); // 3
	cout << st.size(); // 4
	cout << st.empty(); 

	stack<int> st1, st2;
	st1.swap(st2);
}

//Queue
void ExplainQueue()
{
	queue<int> q;
	q.push(1); // {1}
	q.push(2); // {1, 2}
	q.emplace(4); // {1, 2, 4}

	q.back() += 5
	cout << q.back(); // prints 9

	// Q is  {1, 2, 9}
	cout << q.front(); // prints 1

	q.pop(); // prints 2

	cout << q.front(); // prints 2

	// size, swap, empty same as stack
}

//Priority Queue
void ExplainPriorityQueue()
{
	priority_queue<int> pq;
	pq.push(5); // {5}
	pq.push(2); // {5, 2}
	pq.push(8); // {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}

	cout << pq.top(); // prints 10

	pq.pop(); // {8, 5, 2}

	cout << pq.top(); // prints 8

	// size, swap, empty function same as others

	//Minimum Heap
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(5); // {5}
	pq.push(2); // {5, 2}
	pq.push(8); // {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}

	cout << pq.top(); // prints 2
}

//Set
void ExplainSet();
{
	set<int> s;
	s.insert(1); // {1}
	s.emplace(2); // {1, 2}
	s.insert(2); // {1, 2}
	s.insert(4); // {1, 2, 4}
	s.insert(3); // {1, 2, 3, 4}

	// Functionality of insert in vector
	// can be used also that only increases
	// efficiency

	// begin(), end(), rbegin(), rend(), size()
	// empty() and swap() are same as above

	// {1, 2, 3, 4, 5}
	auto it = s.find(3);

	// {1, 2, 3, 4, 5}
	auto it = s.find(6);

	// {1, 4, 5}
	s.erase(5); // erases 5 // take logarithmic time

	int cnt = s.count(1); 

	auto it = s.find(3);
	s.erase(it); // it takes constant time

	// {1, 2, 3, 4, 5}
	auto it1 = s.find(2);
	auto it2 = s.find(4);
	s.erase(it1, it2); // after erase {1, 4, 5} [first, last]

	// lower_bound() and upper_bound() function work in the same way
	// as in vector it does

	// This is the syntax
	auto it = s.lower_bound(2);
	auto it = s.upper_bound(3);
}

//Multi Set
void ExplainMultiSet()
{
	// Everything is same as Set
	// Only stores duplicate element also

	multiset<int> ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	ms.erase(1); // all 1's erase

	int cnt = ms.count(1);

	// only a single one erased
	ms.erase(ms.find(1));

	ms.erase(ms.find(1), ms.find(1)+2);

	// Rest all function same as set
}

// Unordered Set
void ExplainUnorderedSet()
{
	unordered_set<int> s;
	// lower_bound and upper_bound finction
	// does not works, rest all function are same
	// as above, it does not store in any particular order
	// it has better complexity
	// than set in most cases, excpet some when collision happen
}

// Map
void ExplainMap()
{
	map<int, int> mp;
	map<int, pair<int, int>> mp;
	map< pair<int, int>, int> mp;

	mp[1] = 2;
	mp.emplace({3, 1});
	mp.insert({2, 4});
	mp[{2, 3}] = 10;
	{
		{1, 2}
		{2, 4}
		{3, 1}
	}

	for(auto it: mp)
	{
		cout << it.first << " " << it.second << endl;
	}

	cout << mp[1];
	cout << mp[5];

	auto it = mp.find(3);
	cout << *(it).second;

	auto it = mp.find(5);

	// This is the syntax
	auto it = mp.lower_bound(2);

	auto it = mp.upper_bound(3);

	// erase, swap, size, empty are same as above
}

// MultiMap
void ExplainMultiMap()
{
	// everything same as map, only it can store multiple keys
	// only map[key] cannot be used here
}

// Unorederd Map
void ExplainUnorderedMap()
{
	// same as set and unordered_set difference
}

// Extra Discussion
bool comp(pair<int, int> p1, pair<int, int> p2)
{
	if(p1.second < p2.second)
	{
		return true;
	}
	else if(p1.second == p2.second)
	{
		if(p1.first > p2.second)
		{
			return true;
		}
	}

	return false;
}

void ExplainExtra()
{
	sort(a, a+n);
	sort(v.begin(), v.end());
	sort(a+2, a+4);
	sort(a, a+n, greater<int>); // Sort in Descending Order

	pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

	// sort it according to second element
	// if second element is same then sort
	// it according to first element but in descending

	sort(a, a+n, comp);

	// {{4, 1}, {2, 1}, {1, 2}}

	int num = 7;
	int cnt = __builtin_popcount();

	long long num = 165786578687;
	int cnt = __builtin_popcountll();

	string s = '123';
	do{
		cout << s << endl;
	} while(next_permutation(s.begin(), s.end()));


	int maxi = *max_element(a, a+n);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while(t--)
    {
		ExplainPairs();
		ExplainVectors();
		ExplainList();
		ExplainDequeue();
		ExplainStack();
		ExplainPriorityQueue();
		ExplainSet();
		ExplainMultiSet();
		ExplainUnorderedSet();
		ExplainMap();
		ExplainMultiMap();
		ExplainUnorderedMap();
		ExplainExtra();
	}

	return 0;
}




