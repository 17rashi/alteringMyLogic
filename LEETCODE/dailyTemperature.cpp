//https://leetcode.com/problems/daily-temperatures/

class Solution {
public:
    vector<int> nextGreater(vector<int> arr){
        stack<int> s;
        vector<int> ans;
        s.push(-1);
        for(int i=arr.size()-1;i>=0;i--){
            while(s.top()!=-1 && arr[s.top()]<=arr[i]){
                s.pop();
            }
            if(s.top()==-1){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }
            s.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans=nextGreater(temperatures);
        for(int i=0;i<ans.size();i++){
            if(ans[i]==-1){
                ans[i]=0;
            }
            else{
                ans[i]=abs(i-ans[i]);
            }
        }
        return ans;
    }
};