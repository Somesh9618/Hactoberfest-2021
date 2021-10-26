class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        if(nums.empty()) return {};
        for(int i=0;i<n;i++){
            int ind=abs(nums[i])-1;
            if(nums[ind]>0)
                nums[ind]=(-nums[ind]);
            else
                v.push_back(abs(nums[i]));
       
        }
        return v;
    }
};
