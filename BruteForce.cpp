class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            int product = 1;
            for(int j=0;j<n;j++){
                if(i!=j) product=product*nums[j];
            }
            temp.emplace_back(product);
        }
        return temp;
    }
};
