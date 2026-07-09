class Solution {
  public:
    bool fun(vector<int>&arr,int low,int high){
        if(high==arr.size()) return true;
        if(arr[low]>arr[high]) return false;
        return fun(arr,low+1,high+1);   
    }
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n<=1) return true;
        return fun(arr,0,1);
    }
};