#include "../stdc++.h"

/*
Put the unique elements in the front, rest of the array can have anything
*/

/*
One approach could be - we could declare a set which will unique elements from
the vector, so traverse over the vector and insert into the set
Now the traverse over the set and put the elements one by one till the size of 
the set

Good approach would require you to compare the adjacent elements
Keep an index k which would always point to a unqiue element from vector
Go over the vector if lastElement != current do a[++k] = current;
*/

void print(const std::vector<int>& v) {
    for (const auto& a: v) {
        std::cout << a << " ";
    }
    std::cout << "\n";
}

int removeDuplicatesFromSorted(std::vector<int>& v) {
    int k = 0;
    for (int i=1; i<v.size(); i++) {
        if (v[i-1] != v[i]) {
            v[++k] = v[i];
        }
    }
    return k+1;
}

int main() {
    std::vector<int> v = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3};
    removeDuplicatesFromSorted(v);
    print(v);
}