/*
    二分查找算法
    zxk
*/
#include <stdio.h>
int main()
{
    int array[] = {1,2,3,4,5,6,7,8};
    /* 数组的元素的个数 */
    int size = sizeof(array)/sizeof(array[0]);
    /* 最小的查找范围的索引值 */
    int minSubscript = 0;
    /* 最大的查找范围的索引值 */
    int maxSubscript = size - 1;
    /* 想要查找的数值 */
    int wantFind = 7;
    while(minSubscript<=maxSubscript)
    {
        // 取中间的下标 
        int middle = (minSubscript + maxSubscript)/2;
        if(wantFind > array[middle])
        {
            minSubscript = middle + 1;
        }
        else if(wantFind < array[middle])
        {
            maxSubscript = middle - 1;
        }
        else
        {
            printf("找到了 下标为%d\n",middle);
            break;
        }
    }
    if(minSubscript>maxSubscript)
    {
        printf("没有找到");
    }
    return 0;
}
