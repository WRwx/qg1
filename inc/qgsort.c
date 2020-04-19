#include "qgsort.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>
void insertSort(int* a, int n)
{
	int i, j, temp;
	for ( i = 1; i < n; i++)
	{
		temp = a[i];
		for ( j = i-1; j >= 0 && a[j] > temp ; j--)
		{
			a[j + 1] = a[j];		//每个元素向后移
		}
		a[j + 1] = temp;			//将值插入
	}
}

void MergeArray(int* a, int begin, int mid, int end, int* temp)
{
	int i = begin;
	int j = mid + 1;
	int t = 0;
	while ((i<=mid)&&j<=end)
	{
		if (a[i] < a[j]) {
			temp[t++] = a[i++];
		}
		else
		{
			temp[t++] = a[j++];
		}
	}
	while (i<=end)
	{
		temp[t++] = a[i++];
	}
	while (j<=end)
	{
		temp[t++] = a[j++];
	}
	t = 0;
	while (begin<=end)
	{
		a[begin++] = temp[t++];
	}
}

void MergeSort(int* a, int begin, int end, int* temp)
{
	if (begin<end)
	{
		int mid = (begin + end) / 2;
		MergeSort(a, begin, mid, temp);
		MergeSort(a, mid + 1, end, temp);
		MergeArray(a, begin, mid, end, temp);
	}
}

void QuickSort_Recursion(int* a, int begin, int end)
{
	if (a==0||begin<0||end<=0||begin>end)
	{
		return;
	}
	int k = Partition(a, i, j);
	if (k>begin)
	{
		QuickSort(a, begin, k - 1);
	}
	if (k<end)
	{
		QuickSort(a, k + 1, end);
	}
}

int Partition(int* a, int begin, int end)
{
	if (a==0||begin<0||end<=0||begin>=end)
	{
		return -1;
	}
	int priot = a[begin];
	int i = begin, j = end;
	while (i<j)
	{
		while (i > j && a[j] >= priot) {
			j--;
		}
		if (i<j)
		{
			a[i] = a[j];
		}
		while (i<j&&a[i]<=priot)
		{
			i++;
		}
		if (i<j)
		{
			a[j] = a[i];
		}
	}
	a[i] = priot;
	return i;
}

void CountSort(int* a, int size, int max)
{
	if (a==0)
	{
		return;
	}
	max = a[0];
	int min = a[0];
	for (int i = 1; i < size; i++)
	{
		if (a[i] > max)	max = a[i];
		if (a[i] < min)min = a[i];
	}
	size = max - min + 1;
	int* couarr = new int[size];
}
