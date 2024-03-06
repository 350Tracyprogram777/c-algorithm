#include"stdio.h"
//写一个归并排序的函数MergeSort
//实现的功能是通过递归“分”与“治”
void MergeSort(int Sarr[], int Tarr[], int StartOne, int EndOne)
{
	int MidOne;
	if (StartOne < EndOne)
	{
		MidOne = StartOne + (EndOne - StartOne) / 2;//取中间的下标，实现对半“分”
		MergeSort(Sarr, Tarr, StartOne, MidOne);//递归“分”左一半
		MergeSort(Sarr, Tarr, MidOne+1, EndOne);//递归“分”右一半
		Merge(Sarr, Tarr, StartOne, MidOne, EndOne);//实现递归每一步的“治”：排序元素
	}
}
//Merge实现“治”，把左右两半并为排好序的一个数组
void Merge(int Sarr[], int Tarr[], int StartOne, int MidOne, int EndOne)
{
	int i = StartOne, j = MidOne + 1, k = StartOne;
	while (i != MidOne + 1 && j != EndOne + 1)//把两半逐个比较大小放入Tarr中
	{
		if (Sarr[i] > Sarr[j])
		{
			Tarr[k++] = Sarr[j++];
		}
		else
		{
			Tarr[k++] = Sarr[i++];
		}
	}
	while (i != MidOne + 1)//把左一半剩余的元素放进排好序的Tarr中
	{
		Tarr[k++] = Sarr[i++];
	}
	while (j != EndOne + 1)//把右一半剩余的元素放进排好序的Tarr中
	{
		Tarr[k++] = Sarr[j++];
	}
	for (i = StartOne; i <= EndOne; i++)//把排好序的Tarr拷贝给Sarr数组
	{
		Sarr[i] = Tarr[i];
	}
}
//测试归并排序的main函数；
int main()
{
	int a[7] = { 4,3,1,2,7,5,6 };
	int i, b[7];
	MergeSort(a, b, 0, 6);
	for (i = 0; i < 7; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
