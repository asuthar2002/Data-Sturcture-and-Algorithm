class Solution {
public:
   string longestPalindrome(string s) {
    int n = s.length();
    if (n <= 1) return s; // If the string is empty or has only one character, it's already a palindrome.

    string ans = "";
    for (int i = 0; i < n; i++) {
        // Odd length palindrome centered at i
        string oddPalindrome = code(s, i, i);
        // Even length palindrome centered at i and i+1
        string evenPalindrome = code(s, i, i + 1);

        // Update the answer with the longer of the two palindromes
        if (oddPalindrome.length() > ans.length()) ans = oddPalindrome;
        if (evenPalindrome.length() > ans.length()) ans = evenPalindrome;
    }
    return ans;
}

string code(string s, int left, int right) {
    int n = s.length();
    while (left >= 0 && right < n && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
    }
};