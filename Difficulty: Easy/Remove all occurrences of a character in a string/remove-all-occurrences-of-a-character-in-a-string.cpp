class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        // code here
        s.erase(remove(s.begin(),s.end(),c),s.end());
    }
};