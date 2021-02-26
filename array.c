﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//数组作为函数参数
//冒泡排序
//例：实现一个冒泡排序函数将一个整形数组排序。那我们将会这样使用该函数
/*
void  bubble_sort(int arr[], int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;  //假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;  //本趟排序的数据其实不完全有序
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//对arr进行排序，排成升序
	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
	bubble_sort(arr, sz);  //冒泡排序函数
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}
*/


int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	//printf("%p\n", arr);//数组名
	//printf("%p\n", &arr[0]); //数组名就是首元素的地址
	//printf("%d\n", *arr);  //1； &arr：数组的地址
	printf("%p\n", arr);       //
	printf("%p\n", arr+1);     //与arr差四个地址
	printf("%p\n", &arr[0]);   //
	printf("%p\n", &arr[0]+1); //与&arr[0]差四个地址
	printf("%p\n", &arr);      //
	printf("%p\n", &arr+1);    //与&arr差28个地址； 4*7个元素=28


	return 0;
}

////数组名就是首元素的地址（有两个例外）
//1.sizeof（数组名）- 数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节 
//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//