class Solution {
public:
    int ans=0;
    bool neg=0;
    bool no=0;
    void helper(string s,int i=0){
        if(i==s.length()) return;
        if(no&&s[i]==' ')return;
        if(s[i]=='-') neg=1;
        if(s[i]=='0'&&ans==0) {no=1;}
        if(s[i]>='0'&&s[i]<='9') {
            no=1;
            ans*=10;
            ans+=s[i]-'0';
            
        }
        else 0;
        helper(s,i+1);
        return;
    }
    int myAtoi(string s) {
        
        helper(s);
        if(neg) ans*=-1;
        return ans;
    }
};