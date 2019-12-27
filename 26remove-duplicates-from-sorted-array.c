int removeDuplicates(int* nums, int numsSize){
    if(numsSize<=1) return numsSize;
    int i=0,j=0;
    for(j=1;j<numsSize;j++)
    {
        if(nums[i]!=nums[j])
        {
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}
