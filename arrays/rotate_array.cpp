#include "../stdc++.h"

void rotateByOne(std::vector<int>& v) {
    int temp = v[0];
    for (int i=1; i<v.size(); i++) {
        v[i-1] = v[i];
    }
    v[n-1] = temp;
}

int main() {

}