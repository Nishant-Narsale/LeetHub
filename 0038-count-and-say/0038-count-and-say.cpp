class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        // cout<<n<<endl;
        string prev = countAndSay(n-1);
        int ct = 1;
        char num = prev[0];
        string ans;
        for(int i=0; i<size(prev)-1; i++){
            if(prev[i]==prev[i+1]){
                ct++;
            }else{
                ans = ans+to_string(ct);
                ans = ans+num;
                num = prev[i+1];
                ct=1;
            }
        }
        
        ans = ans+to_string(ct);
        ans = ans+num;
        cout<<ans<<endl;
        return ans;
    }
};