#include <stdio.h>
int binary_search(int key,int a[],int n) //自定义函数binary_search()
{
    int low,high,mid,count=0,count1=0;
    low=0;
    high=n-1;
    while(low<=high)    //査找范围不为0时执行循环体语句
    {
        count++;    //count记录査找次数
        mid=(low+high)/2;    //求中间位置
        if(key<a[mid])    //key小于中间值时
            high=mid-1;    //确定左子表范围
        else if(key>a[mid])    //key 大于中间值时
            low=mid+1;    //确定右子表范围
        else if(key==a[mid])    //当key等于中间值时，证明查找成功
        {
            printf("查找成功!\n 查找 %d 次!a[%d]=%d",count,mid,key);    //输出査找次数及所査找元素在数组中的位置
            count1++;    //count1记录查找成功次数
            break;
        }
    }
    if(count1==0)    //判断是否查找失敗
        printf("查找失敗!");    //査找失敗输出no found
    return 0;
}
int main()
{
    int i,key,a[100],n;
    printf("请输入数组的长度：\n");
    scanf("%d",&n);    //输入数组元素个数
    printf("请输入数组元素：\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);    //输入有序数列到数组a中
    printf("请输入你想查找的元素：\n");
    scanf("%d",&key);    //输入要^找的关键字
    binary_search(key,a,n);    //调用自定义函数
    printf("\n");
    return 0;
}