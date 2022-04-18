class Solution {
public:
    string makeGood(string s) {
        // if(s.length)
        stack<char> ch;
        string str;
        for(int i=0;i<s.length();i++){
            if(ch.empty()==true){
                ch.push(s[i]);
            }
            else if(ch.empty()==false && (toupper(ch.top())==toupper(s[i])) && (ch.top()!=s[i])){
                ch.pop();
            }
            else{
                ch.push(s[i]);
            }
        }
        while(ch.empty()==false){
            str+=ch.top();
            ch.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};