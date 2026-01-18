#include "../stdc++.h"

/*
Select the minimum of i+1 to n and replace it with i
Has time complexity n(n-1)/2 ~ O(n^2)
*/
void selectionSort(std::vector<int>& v) {
    for (int i=0; i<=v.size()-2; i++) {
        int minIdx = i;
        for (int j=i+1; j<=v.size()-1 ; j++) {
            if (v[minIdx] > v[j]) {
                minIdx = j;
            }
        }
        std::swap(v[i], v[minIdx]);
    }
}

/*
Swap j with j+1 if v[j] > v[j+1]
do this with j varying from 0 to k-1
k varies from n-1 to 1 
At the end of every iteration, portion of array 
that is sorted increases.
Worst/average case time complexity is O(n^2)
But in case of almost sorted arrays it improves
*/
void bubbleSort(std::vector<int>& v) {
    bool didSwap = false;
    for (int k=v.size()-1; k>=1; k--) {
        for (int j=0; j<=k-1 ; j++) {
            if (v[j] > v[j+1]) {
                std::swap(v[j], v[j+1]);
                didSwap = true;
            }
        }
        if (!didSwap) {
            break;
        }
    }
}

/*
pick an element at i, now find its correct location
behind it, start from i-1 and go back 
push the higher element at an higher postion
a[j+1] = a[j]
j--
Best case complexity is O(n)
*/
void insertionSort(std::vector<int>& v) {

    for (int i=1; i<v.size(); i++) {
        int key = v[i];
        int j = i-1;
        while (j >= 0 &&  key < v[j]) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

void print(const std::vector<int>& v) {
    for (const auto& a: v) {
        std::cout << a << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> v = {10, 6, 8, 4, 11, 1};
    auto selectSortV = v;
    selectionSort(selectSortV);
    print(selectSortV);

    auto bubbleSortV = v;
    bubbleSort(bubbleSortV);
    print(bubbleSortV);

    auto insertSortV = v;
    insertionSort(insertSortV);
    print(insertSortV);

}