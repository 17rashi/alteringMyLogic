class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       
        vector<string> str;
        int count=1,i=0;
         if(target[0]==1 && target.size()==1){
            str.push_back("Push");
            return str;
        }
        while(i<=n){
            if(target[i]==count){
                str.push_back("Push");
                i++;
                count++;
            }
            else{
                str.push_back("Push");
                str.push_back("Pop");
                count++;
            }
            if(target[target.size()-1]==count){
                str.push_back("Push");
                break;
            }
        }
        return str;
    }
};