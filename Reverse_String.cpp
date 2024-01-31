// #Reverse String (https://leetcode.com/problems/reverse-string)

// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 
// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.

Solution:

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left =0; //Here, we are initializing a pointer from left side of the string
        int right=s.size()-1; //We are initializing a pointer from last of the string as length-1, so that we can swap them inside a while loop until right is greater than left
        while (left<right){
            char tmp = s[left]; #we store the left side in tmp
            s[left++]=s[right];
            s[right--]=tmp;
        }
        
    }
};
