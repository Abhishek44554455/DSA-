class Solution {
public:
//abhishek
    int maxProduct(vector<int>& nums) {
        int maxproduct=nums[0];
        int minproduct=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxproduct,minproduct);
            }
            // currSum=max(nums[i],currSum*nums[i]);
            minproduct=min(nums[i],minproduct*nums[i]);
            maxproduct=max(nums[i],maxproduct*nums[i]);

            ans=max(ans,maxproduct);
            
        }
        return ans;
    }
};