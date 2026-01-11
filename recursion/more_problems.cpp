#include <iostream>

/*
n = 5
0 1 2 3 4
i with n-i-1 i till n/2
4 3 2 1 0
0 1 2 3 4 5

*/
void reverseArray(int arr[], int i, int n) {
    if (i >= n/2) {
        return;
    }

    int a = arr[i];
    int b = arr[n-i-1];
    arr[i] = b;
    arr[n-i-1] = a;
    reverseArray(arr, i+1, n);
}

void print(int arr[], int n) {
    for (int i=0; i<n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}


int main() {
    int arr[] = {1, 2, 3, 4, 6, 7};
    int arr1[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 0, 6);
    reverseArray(arr1, 0, 5);
    print(arr, 6);
    print(arr1, 5);
}