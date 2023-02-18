/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
         string digit="";
            int cnt=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='.'){
                    cnt++;
                    if(digit.length()==0)return 0;
                    if(stoi(digit)>255)return false;
                    if(digit[0] == '0' && digit.length() > 1) return false;
                    digit="";
                }else{
                    if(isalpha(s[i]))return false;
                    digit+=s[i];
                }
            }
            if(digit.length()==0)return 0;
            if(stoi(digit)>255)return false;
            if(digit[0] == '0' && digit.length() > 1) return false;
            if(cnt!=3)return false ;
            return true;
            // code here
        }
};