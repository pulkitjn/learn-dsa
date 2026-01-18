#include"../stdc++.h"

int largestNumber(const std::vector<int>& v) {
    // brute approach is to sort the vector first then pick v[n-1]
    // optimal is to find by going over the vector
    int largest = v[0];
    for (int i=1; i<v.size(); i++) {
        if (v[i] > largest) {
            largest = v[i];
        }
    }
    return largest;
}

int secondLargest(std::vector<int>& v) {
    int largest = v[0];
    int secondLargest = -1;
    for (int i=1; i<v.size(); i++) {
        if (v[i] > largest) {
            secondLargest = largest;
            largest = v[i];
        } else if (v[i] > secondLargest && v[i] < largest) {
            secondLargest = v[i];
        }

    }
    return secondLargest;
}

int secondSmallest(std::vector<int>& v) {
    int smallest = v[0];
    int secondSmallest = INT_MAX;
    for (int i=1; i<v.size(); i++) {
        if (v[i] < smallest) {
            secondSmallest = smallest;
            smallest = v[i];
        } else if (v[i] > smallest && v[i]< secondSmallest) {
            secondSmallest = v[i];
        }
    }
    return secondSmallest;
}

int main() {

}