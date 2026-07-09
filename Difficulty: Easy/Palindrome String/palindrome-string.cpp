class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string n=s;
        reverse(s.begin(),s.end());
        if(s==n) return true;
        return false;
    }
};