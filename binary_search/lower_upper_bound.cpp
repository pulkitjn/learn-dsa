#include "../stdc++.h"

/*
Lower Bound = smallest index such that arr[idx] > = x

0  1   2  3  4  5  6  7
{1, 1, 3, 3, 4, 5, 6, 6}

lower_bound of 3 in this is 2
lower_bound of 6 in this is 6
*/

int lower_bound(int key, std::vector<int>& v) {
    int low = 0;
    int high = v.size() -1;
    int res = v.size(); // when there is no idx such that arr[idx] >= x return n
    while (low <= high) {
        int mid = low + (high -low)/2;
        auto midVal = v[mid];
        if (midVal >= key) {
            // maybe a result
            res = mid;
            // we still have to try on the left
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return res;
}

/*
Upper Bound = smallest index such that arr[idx] > x

1 2 3 4 5

6
*/

int upper_bound(int key, std::vector<int>& v) {
    int low = 0;
    int high = v.size() -1;
    int res = v.size(); // when there is no idx such that arr[idx] > x return n
    while (low <= high) {
        int mid = low + (high - low)/2;
        auto midVal = v[mid];
        if (midVal > key) {
            res = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}

// if element exists we can insert at the lower bound postion
// if element does not exist then again insert at the lower bound position
int search_insert_position(int key, std::vector<int>& v) {
    return lower_bound(key, v);
}

// largest number in sorted array <= x, arr[idx] <=x
int floor_in_sorted_array(std::vector<int>& v, int x) {
    int n = v.size();
    int low = 0;
    int high = n-1;
    int res = -1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (v[mid] <= x) {
            res = mid;
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    if (res != -1) {
        return v[res];
    }
    return res;
}

// smallest number in sorted array such that arr[idx]>=x
int ceil_in_sorted_array(std::vector<int>& v, int x) {
    int res = lower_bound(x, v);
    if (res != -1) {
        return v[res];
    }
    return -1;
}

std::pair<int,int> first_and_last_occurance_of_x(std::vector<int>& v, int x) {
    int lb = lower_bound(x, v);
    int n = v.size();
    if (lb == n || v[lb] != x) {
        return {-1, -1};
    }
    int ub = upper_bound(x, v);
    return {lb, ub-1};
}

int first_occurance_of_x(std::vector<int>& v, int x)
{
    int n = v.size();
    int low = 0;
    int high = n-1;
    int res = -1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (v[mid] == x) {
            res = mid;
            high = mid-1;
        } else if (v[mid] > x) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return res;
}

int last_occurance_of_x(std::vector<int>& v, int x) {
    int n = v.size();
    int low = 0;
    int high = n-1;
    int res = -1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (v[mid] == x) {
            res = mid;
            low = mid+1;
        } else if (v[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}

int number_of_occurances_of_x(std::vector<int>& v, int x) {
    int first_occurance = first_occurance_of_x(v, x);
    if (first_occurance == -1) {
        return 0;
    }
    int last_occurance = last_occurance_of_x(v, x);
    return (last_occurance - first_occurance + 1);
}

int main() {
    std::vector<int> v = {1, 1, 3, 3, 4, 5, 6, 6};
    int res = lower_bound(6, v);
    // auto lb = lower_bound(arr.begin(), arr.end(), x) returns an iterator
    int res2 = upper_bound(5, v);
    // auto lb = upper_bound(arr.begin(), arr.end(), x) returns an iterator

    std::cout << res << " " << res2;
}