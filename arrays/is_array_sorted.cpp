#include "../stdc++.h"

bool isSorted(const std::vector<int>& v) // non descending order
{
    for (int i=0; i<=v.size()-2; i++) {
        if (v[i+1] < v[i]) {
            return false;
        }
    }
    return true;
}

int main() {

}