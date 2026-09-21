class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int>mpp;
        for(int i=0;i<nums1.size();i++)
            mpp[nums1[i]]++;
        
        set<int>s;
        for(int i=0;i<nums2.size();i++)
        {
            if(mpp.find(nums2[i])!=mpp.end())
            {
                s.insert(nums2[i]);
            }
        }

        vector<int>sol(s.begin(),s.end());
        return sol;

        
    }
};