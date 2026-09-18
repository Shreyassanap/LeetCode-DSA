class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i=0;
        int count=0;
        while(i<=arr.size())
        {
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+i,0);
                i++;
                count++;
            }
            i++;
        }

        for(int i=0;i<count;i++)
        {
            arr.erase(arr.end());
        }
        
    }
};