class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
         int pre_pro=1;
         int suf_pro=1;
         vector<int>pre;
         vector<int>suf;
         pre.emplace_back(1);
         suf.emplace_back(1);
        for(int i=1;i<n;i++){
            pre_pro=pre_pro*nums[i-1];
            pre.emplace_back(pre_pro);
        }
        for(int i=n-2;i>=0;i--){
            suf_pro=suf_pro*nums[i+1];
            suf.emplace_back(suf_pro);
        }

        for(int i=0;i<n;i++){
            nums[i]=pre[i]*suf[n-i-1];
        }
        return nums;
    }
};
