// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

/*
class Solution {
public:
    int i=0;
    void reverseString(vector<char>& s) {
    int i=0;
        int n= s.size();
        if(i==n/2){
            return;
        }
        else{
            char swap= s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=swap;

            i++;
            reverseString(s);
        }
    }
};
*/