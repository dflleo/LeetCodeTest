void move(int* nums, int numsSize){
    int tmp=0;
    int i=0;
    for(i=0;i<numsSize;i++)
    {
        tmp = nums[0];
        nums[0] = nums[i];
        nums[i] = tmp;
    }
}
void rotate(int* nums, int numsSize, int k){
    k%=numsSize;
    int i=0;
    for(i=0;i<k;i++)
    {
        move(nums,numsSize);
    }
}
