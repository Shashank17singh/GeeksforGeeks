class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int>pq;
        int i;
        int n=arr.size();
        for(i=0;i<k;i++){
            pq.push(arr[i]);
        }
        for(i=k;i<n;i++){
            if(arr[i]>=pq.top()) continue;
            else{
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};