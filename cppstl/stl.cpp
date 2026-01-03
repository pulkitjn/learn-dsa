#include "../stdc++.h"

using namespace std;

void pairs() {
    pair<int, int> p = {1, 3};
    int a = p.first;
    int b = p.second;

    pair<int, int> l[] = {{1,2}, {3,4}};
}

void vectors() {
    vector<int> v; // dynamically allocated arrays
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> pv;
    pv.push_back({1,2}); // copy will be pushed
    pv.emplace_back(3,4); // in place construction of pair

    vector<int> v1(5, 100); // 5 values all equal to 100
    vector<int> v2(v1); // copy assignment
    vector<int> v3(10); // 10 items all equal to 0

    int a = v1.at(1);
    int b = v1[1];

    vector<int>::iterator it = v1.begin();
    int c = *it;
    vector<int>::iterator it1 = v1.end();
    vector<int>::reverse_iterator it2 = v1.rbegin(); // points to the last element of the vector
    it2++; // moves backward, now would point to second last element
    vector<int>::reverse_iterator it3 = v1.rend(); // points to before the first element of the vector
    it3--; // moves forward, now would point to first element of the vector


    vector<int> v5 = {1, 2, 3, 4, 5};
    for (auto a: v5) {
        cout << a << " ";
    }
    // costly execution
    v5.erase(v5.begin()+1); // {1, 3, 4, 5}
    v5.erase(v5.begin(),v5.begin()+2); // {4, 5}

    // costly execution
    v5.insert(v5.begin(), 1); // {1, 4, 5}
    v5.insert(v5.begin()+1, 3, 7); // {1, 7, 7, 7, 4, 5} 

    int v5sz = v5.size();
    v5.pop_back(); // {1, 7, 7, 7, 4}

    v1.swap(v5); // v1 gets content of v5 and v5 gets content of v1
    v1.clear(); // clears all elements of the vector

    bool isv1Empty = v1.empty();
}

void lists() {
    list<int> ls; // doubly linked list
    ls.push_back(1); // {1} - O(1)
    ls.emplace_back(2); // {1, 2} - O(1)
    ls.push_front(4); // {4, 1, 2} - O(1)
    ls.emplace_front(5); // {5, 4, 1, 2} - O(1)

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap 
}

void deques() {
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(5); // {5, 4, 1, 2}
    dq.pop_back(); // {5, 4, 1}
    dq.pop_front(); // {4, 1}
}

void stacks() {
    stack<int> s; // LIFO -> last in first out like stack of books
    // the book that you have kept last will be removed first

    s.push(1); // 1
    s.push(2); // 2 1
    s.push(3); // 3 2 1
    s.emplace(5); // 5 3 2 1
    int top = s.top(); // 5
    int sz = s.size(); // 4
    bool empty = s.empty(); // false

    stack<int> st1, st2;
    st1.swap(st2);
}

void queues() {
    queue<int> q; // fifo -> first in first out

    q.push(1); // 1 
    q.emplace(2); // 1 2
    q.push(5); // 1 2 5
    q.pop(); // 2 5
    int a = q.front(); // 2
    q.back() += 5; // {2, 10}

    int sz = q.size();
    int empty = q.empty();
}

void priorityqueues() {
    priority_queue<int> pq; // max element stays at top max heap

    // push -> O(log(n))
    // top -> O(1)
    // pop -> O(log(n))

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    int top = pq.top(); // 10
    pq.pop(); // {8, 5, 2}

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq1; // min element remains top
    pq1.push(5); // {5}
    pq1.push(3); // {3, 5}
    pq1.push(2); // {2, 3, 5}

    int top = pq1.top(); // 2
}

void sets() {
    // sorted and unique

    set<int> st;
    st.insert(10); // {10}
    st.emplace(2); // {2, 10}
    st.insert(5); // {2, 5, 10}

    auto it = st.find(3); // would point to st.end()
    auto it1 = st.find(5);

    st.erase(5); // takes log(n)

    int cnt = st.count(5); // gives 1 or 0 depending on the actual count

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void multisets() {
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.erase(1); // all 1's erased
    int cnt = ms.count(1); // if there are multiple ones, this will tell
    // only erases one of the 1s
    ms.erase(ms.find(1));
}

void unorderedsets() {
    // unique elements in random (most of the time operations have timecomplexity of O(1), worst case O(n))
    unordered_set<int> ust;
}

void maps() {
    // unique keys, values may not be necessarily unique
    // map coresponds to an ordered map which stores the keys in sorted order.
    map<int, int> mp;
    mp[1] = 2;
    mp[2] = 3;
}

void multimaps() {
    // can store duplicate keys
    // we can't do mp[key] here 
    multimap<int, int> mp;
}

void unorderedmaps() {
    // not in sorted order like unordered sets
    unordered_map<int, int> ump;
}

void algorithms() {
    vector<int> a;
    sort(a.begin(), a.end()); // increasing order
    sort(a.begin(), a.end(), greater<int>());
    sort(a.begin(), a.end(), [](int x, int y){return x<y;});
    
    string s = "49786";
    next_permutation(s.begin(), s.end());
}

int main() {

    return 0;
}