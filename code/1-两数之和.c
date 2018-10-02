/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    //int size = numsSize;
    //if(size < 2) return NULL;
    int * solution = (int *)malloc(sizeof(int)*2);

    for(int i = 0;i < numsSize-1; i++){
        for(int j = i+1;j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                solution[0] = i;
                solution[1] = j;
                return  solution;
            }
        }
    }
    return solution;
}
