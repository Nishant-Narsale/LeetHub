class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> all(26,0);
        for(int i=0; i<size(sentence); i++){
            int asci = sentence[i];
            // cout<<asci<<endl;
            all[asci-97] = 1;
        }
        long long int s = accumulate(all.begin(),all.end(),0);
        cout<<s;
        if(s==26)
            return true;
        return false;
    }
};