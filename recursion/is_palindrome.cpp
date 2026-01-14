#include<string>

bool is_palindrome_impl(const std::string& s, int i) {
    int n = s.size();
    if (i >= n/2) {
        return true;
    }
    if (s[i] != s[n-1-i]) {
        return false;
    }
    return is_palindrome_impl(s, i+1);
}


bool is_palindrome(const std::string& s) {
    return is_palindrome_impl(s, 0);
}

int main() {
    
}