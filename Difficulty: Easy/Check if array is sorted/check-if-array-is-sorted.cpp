class Solution {
  public:
    bool fun(vector<int>&arr,int i,int n){
        if(i+1==arr.size()) return true;
        else if(arr[i]>arr[i+1]) return false;
        return fun(arr,i+1,n);   
    }
    bool isSorted(vector<int>& arr) {
        // code here
        if(arr.size()<=1) return true;
        return fun(arr,0,arr.size());
    }
};