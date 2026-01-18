#include "../stdc++.h"

int bs(int key, const std::vector<int>& v) {

    int low = 0;
    int high = v.size() - 1;

    while (low <= high) {
        int mid = low + (high -low)/2;
        if (v[mid] == key) {
            return mid;
        }
        if (v[mid] < key) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;

}

int bs_recursive(int key, int low, int high, const std::vector<int>& v) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high -low)/2;
    const int& midVal = v[mid];
    if (midVal == key) {
        return mid;
    } else if (midVal < key) {
        return bs_recursive(key, mid+1, high, v);
    }
    return bs_recursive(key, low, mid-1, v);
}

// arrau sorted in non increasing order, count the number of ones in it
// [1, 1, 0, 0, 0, 0, 0] n = 7
// n-1 = 6
int countNoOfOnes(const std::vector<int>& v) {

    int low = 0;
    int high = v.size() - 1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        const auto& midVal = v[mid];
        if (midVal == 0) {
            high = mid - 1;
        } else if (midVal == 1) {
            if (mid == v.size() - 1 || v[mid+1] == 0) {
                return mid+1;
            } else {
                low = mid+1;
            }
        }
    }
    return 0;
}


int main() {
    std::vector<int> arr = { 2, 3, 4, 10, 40 };
    int loc1 = bs(10, arr);
    int loc2 =  bs_recursive(4, 0, arr.size()-1, arr);
    std::cout << loc1 << " " << loc2 << " ";

    std::vector<int> arr2 = {1, 1, 1, 1, 0, 0, 0};
    std::cout << countNoOfOnes(arr2);


}