class Solution {
public:
     vector<string> generateParenthesis(int n) {
        vector<string> v;
        solve(v, "", 0, 0, n);
        return v;
    }
  
  void solve(vector<string>& v, string s, int o, int c, int n)
  {
     if(o == n && c == n)
     {
         v.push_back(s);
         return;
     }
    
      
      if(o < n)
      {
          solve(v, s+'(', o+1, c, n);
      }
      if(c < o)
      {
         solve(v, s+')', o, c+1, n);
      }

  }
   
};
