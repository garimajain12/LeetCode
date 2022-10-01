class Solution {
public:
    int numDecodingsHelper(string s, unordered_map<string, int>& mem){
        if(s.size() == 0 || (s[0] != '0' && s.size() == 1)){
            return 1;
        }
            
        if(mem.find(s) != mem.end()){
            return mem[s];
        }
        int ans = 0;
        if(s[0] != '0'){
           int temp1 = numDecodingsHelper(s.substr(1), mem);
           ans += temp1;
            
           if(s.size() >= 2){
            int temp2 = numDecodingsHelper(s.substr(2), mem);
            string temp3 = s.substr(0, 2);
            if(temp3[0] != '0' && stoi(temp3) <= 26){
                ans += temp2;
            }
            
            }   
        }
        mem[s] = ans; 
        return ans;
        
    }
    int numDecodings(string s) {
        unordered_map<string, int> mem;
        return numDecodingsHelper(s, mem);
    }
};