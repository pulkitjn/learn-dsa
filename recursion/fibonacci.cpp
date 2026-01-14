

// there are two calls at every n, n decreases from n to 0, so net calls will be 2^n
// hence time complexity would be O(2^n)
int fibonnaci(int n) {
    if (n<=1) {
        return n;
    }
    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main() {
    int val = fibonnaci(5);

}