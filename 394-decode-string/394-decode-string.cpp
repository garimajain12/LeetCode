class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for (int i=0; i<s.size(); i++) {
            if (s[i] == ']') {
                string s;
                while (st.top() != "[") {
                    s = st.top() + s;
                    st.pop();
                }
                st.pop();
                int k = 0;
                int i = 1;
                while (!st.empty() && isdigit(st.top()[0])) {
                    k += i*(st.top()[0]-'0');
                    i *= 10;
                    st.pop();
                }
                
                string rep;
                while (k--) rep += s;
                st.push(rep);
            } else st.push(string(1, s[i]));
        }
        
        string res;
        while (!st.empty()) {
            res = st.top()+res;
            st.pop();
        }
        
        return res;
    }
};