#include<stdio.h>

int main()
{
	int arr[10]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int *pt=arr;
	printf("%p\n",&arr[0]);
	printf("%p\n",&pt);
	printf("%p\n",pt);
	printf("%d\n",*pt);

	printf("%d\n",*pt+3);//4
	printf("%d\n",pt[3]);//7
	printf("%p\n",&*pt);//
	printf("%p\n",*&pt);//
	//printf("%d\n",*pt[3]);
	printf("%d\n",*(pt+3));//7

	printf("%d\n",*pt++);//1
	printf("%d\n",*(pt++));//3

	//这两行说明，取地址是有权改变其中值得！！！
	printf("%d\n",(*pt)++);//5
	printf("%d\n",++(*pt));//7

	return 0;
}