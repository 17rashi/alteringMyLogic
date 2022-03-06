//https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string result="";
        while(i<s.length()){
            while(i<s.length() && s[i]==' '){
                i++;
            }
            int j=i+1;
            while(j<s.length() && s[j]!=' '){
                j++;
            }
            string word=s.substr(i,j-i);
            result= word+" "+result;  
             i=j+1;
        }
        if(result[0]==' ')
            result=result.substr(1);
        if(result[result.length()-1]==' ')
            result.pop_back();
        return result;
    }
};