class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n,1);
        int pre_pro=1;
        for(int i=0;i<n;i++){
            temp[i]=pre_pro;  
            pre_pro=pre_pro*nums[i];      
        }
        int suf_pro=1;
        for(int i=n-1;i>=0;i--){
            temp[i]=temp[i]*suf_pro;
            suf_pro*=nums[i];
        }
        return temp;
    }
};
