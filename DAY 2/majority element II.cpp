class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int sz=nums.size();
        int num1=-1,num2=-1,count1=0,count2=0,index;
        for(index=0;index<sz;index++){
            if(nums[index]==num1){
                count1++;
            }
            else if(nums[index]==num2){
                count2++;
            }
            else if(count1==0){
                num1=nums[index];
                count1=1;
            }
            else if(count2==0){
                num2=nums[index];
                count2=1;
            }
            else{
                --count1;
                --count2;
            }
        }
        vector<int> ans;
        count1=count2=0;
        for(index=0;index<sz;index++){
            if(nums[index]==num1){
                count1++;
            }
            else if(nums[index]==num2){
                count2++;
            }
        }
        if(count1>sz/3)
            ans.push_back(num1);
        if(count2>sz/3)
            ans.push_back(num2);
        return ans;
    }
};
