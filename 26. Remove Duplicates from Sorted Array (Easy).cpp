class Solution {
    int removeDuplicates(int* nums, int numsSize) {
    if (numsSize==0)
        return 0;

    int i=0;
    for (int j=0;j<numsSize;j++)
    {
        if (nums[j]!=nums[i]){   //找到沒有重複的值
            i++;
            nums[i] = nums[j];   //把位於nums[j](為無重複的值)移動到i++的位置
        }
    }
    return i + 1;   //+1是因為陣列從0開始

    }
};