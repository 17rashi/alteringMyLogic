class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        dq.push_back(0);
        for(int i=1;i<k;i++){
            while(!dq.empty() && arr[dq.back()]<=arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }  
        ans.push_back(arr[dq.front()]);
        for(int i=k;i<arr.size();i++){
            while(!dq.empty() && i-dq.front()>=k){
                dq.pop_front();
            }
            while(!dq.empty() && arr[dq.back()]<=arr[i]){
                dq.pop_back();
            }  
            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};