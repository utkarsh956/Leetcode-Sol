class Solution {
public:
    string largestGoodInteger(string num) {
        int mx=-1,cnt=0;
        for(int i=0;i<num.length()-2;i++)
        {
            if((num[i]==num[i+1])&&(num[i+1]==num[i+2]))
            {
                mx=max(mx,(num[i]-'0'));
            }
        }
        return mx==-1?"":string(3,mx+'0');
    }
};