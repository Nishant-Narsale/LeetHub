#include <string.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string st = to_string(num);
        vector<string> unit{"I","II","III","IV","V","VI","VII","VIII","IX","X"};
        vector<string> tenth{"X","XX","XXX","XL","L","LX","LXX","LXXX","XC","C"};
        vector<string> hundredth{"C","CC","CCC","CD","D","DC","DCC","DCCC","CM","M"};
        vector<string> thousandth{"M","MM","MMM"};
        vector<string> ans;
        int ct=1;
        
        for(int i=size(st)-1; i>=0; i--){
            stringstream obj;
            int nu;
            obj<<st[i];
            obj>>nu;
            if(nu>0){
                if(ct==1){
                    ans.push_back(unit[nu-1]);
                }else if(ct==2){
                    ans.push_back(tenth[nu-1]);
                }else if(ct==3){
                    ans.push_back(hundredth[nu-1]);
                }else if(ct==4){
                    ans.push_back(thousandth[nu-1]);
                }   
            }
               
            ct++;
        }
        
        
        
        string an;
        for(int j=0; j<size(ans); j++){
            an += ans[size(ans)-j-1];
        }
        
        return an;
    }
};