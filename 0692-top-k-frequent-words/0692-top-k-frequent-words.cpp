class Solution {
public:
    
    // Comparison function for sorting the
    // set by increasing order of its pair's
    // second value
    struct comp {
        template <typename T>

        // Comparator function
        bool operator()(const T& l,
                        const T& r) const
        {
            if (l.second != r.second) {
                return l.second > r.second;
            }
            return l.first < r.first;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        vector<string> ans;
        for(int i=0; i<size(words); i++){
            m[words[i]] = m[words[i]] + 1;
        }
        
        set<pair<string, int>, comp> S(m.begin(),
                                   m.end());
        
                
        for (auto& it : S) {
            if(k>0){
                ans.push_back(it.first);
                k--;
            }
            else{
                break;
            }
            
        }
        
        // map<string,int>::iterator it;
        // for(it=m.begin(); it!=m.end(); it++){
        //     ans.push_back(it->first);
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        
        return ans;
    }
};