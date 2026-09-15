class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct= nums[0];
        int minProduct=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int prevMax=maxProduct;
            int prevMin=minProduct;

            maxProduct=max(nums[i],max(prevMax*nums[i],prevMin*nums[i]));
            minProduct=min(nums[i],min(prevMax*nums[i],prevMin*nums[i]));
            ans=max(ans,maxProduct);
        }
        return ans;
    }
};