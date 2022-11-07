class Solution {
public:
    int maximum69Number (int num) {
        string st = to_string(num);
        string ans = "";
        bool first=true;
        for(int i=0; i<size(st); i++){
            if (st[i]=='6' && first){
                ans+='9';
                first=false;
            }else{
                ans+=st[i];
            }
        }
        
        return stoi(ans);
    }
};