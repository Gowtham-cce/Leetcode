int majorityElement(int* nums, int numsSize){
    int voter=nums[0];
    int votecount=1;
    for(int index=1;index<numsSize;index++){
        if(nums[index]==voter){
            ++votecount;
        }
        else{
            --votecount;
        }
        if(votecount==0){
            voter=nums[index];
            votecount=1;
        }
    }
    return voter;
}
