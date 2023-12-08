class Solution {
private:
    void addstring(string num1,string num2,int i,int j,int carry,string&ans){
        if(i<=0 && j<=0 && carry==0)
            return;
        int first=0;
        int second=0;
        if(i>0)
            first=num1[i-1]-'0';
        if(j>0)
            second=num2[j-1]-'0';
        int sum=first+second+carry;
        int lastdigit = sum%10;
        carry = sum/10;
        ans.push_back(lastdigit+'0');
        addstring(num1,num2,i-1,j-1,carry,ans);
    }
public:
    string addStrings(string num1, string num2) {
        int sizenum1=num1.length();
        int sizenum2=num2.length();
        int carry=0;
        string ans="";
        addstring(num1,num2,sizenum1,sizenum2,carry,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
