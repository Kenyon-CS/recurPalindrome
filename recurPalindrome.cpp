#include <iostream>
#include <string>

// Function to check whether a string is a palindrome.
bool isPalindrome(const std::string& s) {
    int len = s.size();
    if (len <= 1) {
        return true;
    }

    std::cout << s.substr(1, len - 2) << std::endl;
    return s.front() == s.back() && isPalindrome(s.substr(1, len - 2));
}

int main() {
    std::string s;
    std::cout << "Word to check: ";
    std::cin >> s;

    if (isPalindrome(s)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
