//https://leetcode.com/problems/online-stock-span/

class StockSpanner {
public:
    vector<int> ans;
    stack<int> s;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        ans.push_back(price);
        int res;
        while(s.empty()==false && ans[s.top()]<=price){
            s.pop();
        }
        res=s.empty()?(i+1):(i-s.top());
        s.push(i++);
        return res;
    }
};