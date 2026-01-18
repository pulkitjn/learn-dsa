#include "../stdc++.h"

/* does not contain duplicate
 this algorithm wont work for 
duplicates 
following example breaks
3 1 2 3 3 3 3
main concept here was identifying the sorted
half by doing a comparision which does not
work here
*/
int search_in_rotated_sorted_array(std::vector<int>& v, int x) {
     
    int low = 0;
    int high = v.size();

    while (low <= high) {
        int mid = low + (high -low)/2;
        if (v[mid] == x) {
            return mid;
        }
        // eliminate the half which is unsorted
        if (v[low] <= v[mid]) { 
            if (x >= v[low] && x<= v[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (x >= v[mid] &&  x <= v[high]) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
    }
    return -1;
}

/*
We would need to shrink our search space whenever
we are not able to identify the sorted half
this has to be done for checking the mid value
*/
// time complexity would be O(n/2)
int search_in_rotated_sorted_array_with_duplicates(std::vector<int>& v, int x) {
     
    int low = 0;
    int high = v.size();

    while (low <= high) {
        int mid = low + (high -low)/2;
        if (v[mid] == x) {
            return mid;
        }
        if (v[mid] == v[low] && v[mid] == v[high]) {
            low++, high--;
            continue;
        }
        // eliminate the half which is unsorted
        if (v[low] <= v[mid]) { 
            if (x >= v[low] && x<= v[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (x >= v[mid] &&  x <= v[high]) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
    }
    return -1;
}

int main() {

}