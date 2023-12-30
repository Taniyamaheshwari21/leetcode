int max(int a, int b){
    if (a>b){
        return a;
    }
    else
        return b;
}

int jump(int* nums, int numsSize) {
    if(numsSize < 2) return 0;
    if(nums[0] >=numsSize - 1) return 1;
    int i=0;int end=0;
    int count=0;int step=0;
    for(int i=0;i<numsSize-1;i++){
        step = max(nums[i]+i,step);
        if(i == end)
        {
            end = step;
            count++;
        }
    }
    return count;
}