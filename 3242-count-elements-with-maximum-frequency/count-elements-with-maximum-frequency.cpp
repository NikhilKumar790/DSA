class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int hash[101]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        int maxi=0;
        for(int i=0;i<101;i++){
            if(hash[i]>maxi){
                maxi=hash[i];
            }
        }
        int ans=0;
        for(int i=0;i<101;i++){
            if(hash[i]==maxi){
                ans=ans+hash[i];
            }
        }
        return ans;
    }
};