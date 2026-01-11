#include<iostream>

void printNtimes(int n, std::string& s) {
    if (n==0) {
        return;
    }
    std::cout << s << "\n";
    printNtimes(n-1, s);
}

void printTillN(int curr, int n) {
    if (curr > n) {
        return;
    }
    std::cout << curr << " ";
    printTillN(curr+1, n);
}

void printFromNToOne(int n) {
    if (n == 0) {
        return;
    }
    std::cout << n << " ";
    printFromNToOne(n-1);
}

// Lets say you are not allowed to use i

// here printing will not start happening till n becomes 0

void printTillNBacktrack(int n) {
    if (n==0) {
        return;
    }
    printTillNBacktrack(n-1);
    // core logic is after the recursive call
    std::cout << n << " ";
}

void printFromNTillOneBacktrack(int i, int n) {
    if (i > n) {
        return;
    }
    printFromNTillOneBacktrack(i+1, n);
    std::cout << i << " ";
}

int main() {
    std::string s = "hello";
    printNtimes(5, s);
    printTillN(1, 5);
    std::cout << "\n";
    printFromNToOne(6);
    std::cout << "\n";
    printTillNBacktrack(5);
    std::cout << "\n";
    printFromNTillOneBacktrack(1, 5);
    std::cout << "\n";
}