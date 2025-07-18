class Solution {
public:
    string addStrings(string num1, string num2) {
        int x= num1.size()-1;
        int y= num2.size()-1;
        int carry=0;
        string sum = "";

        while(x >=0 || y>=0 || carry){
            int total=0;
            int dig1=0;
            int dig2=0;
            if(x>=0){
                dig1 = num1[x]-'0';
                x--;
            }
            if(y>=0){
                dig2 = num2[y]-'0';
                y--;
            }
            total = dig1+dig2+carry;
            carry=total/10;
            sum+=(total%10) +'0';
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};