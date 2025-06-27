class Solution {
public:
    string binary(string s){
        int n=stoi(s);
        string ans = "";
        while(n){
            ans += n % 2 ? '1' : '0';
            n /= 2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string convertDateToBinary(string date) {
        string y,d,m;
        for(int i=0;i<4;i++){
            y.push_back(date[i]);
        }
        for(int i=5;i<7;i++){
            m.push_back(date[i]);
        }
        for(int i=8;i<10;i++){
            d.push_back(date[i]);
        }
        y=binary(y);
        m=binary(m);
        d=binary(d);
        string ans=" ";
        ans = y + '-' + m+ '-' + d; 
        return ans;

    }
};