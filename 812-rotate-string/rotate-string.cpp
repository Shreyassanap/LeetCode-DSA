class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.length()!=goal.length()){
            cout<<"hey";
            return false;
        }
        
        s=s+s;

        if(s.find(goal)==string::npos)
            return false;
        return true;
       

        
    }
};