class Solution {
public:
    string decodeAtIndex(string S, int K) {
       long long size = 0;  // Initialize the size of the decoded string as a long long
    for (char c : S) {
        if (isdigit(c)) {
            size *= (c - '0');  // Update size by multiplying with the digit
        } else {
            size++;  // Update size by adding 1 for letters
        }
    }

    // Start from the end of the string and work backward to find the kth letter
    for (int i = S.size() - 1; i >= 0; i--) {
        char c = S[i];
        if (isdigit(c)) {
            size /= (c - '0');  // Decrease size by dividing with the digit
            K %= size;  // Adjust K to stay within the current segment
        } else {
            if (K == 0 || K == size) {  // If K is at the beginning or end of the segment, return the letter
                // return c;
                string sc = "";
                sc+=c;
                return sc;
            }
            size--;  // Decrease size for letters
        }
    }
    return "";
    }
};