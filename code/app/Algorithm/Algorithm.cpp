#include "Algorithm.h"

#include <iostream>
#include <algorithm>

CAlgorithm::CAlgorithm()
{

}

CAlgorithm::~CAlgorithm()
{

}

void CAlgorithm::PrintArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << ", ";
	}
	std::cout << std::endl;
}

void CAlgorithm::BubbleSort(int a[], int n)
{
	int flag;

	for (int i = n - 1; i > 0; i--)
	{
		flag = 0;

		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				std::swap(a[j], a[j + 1]);
				flag = 1;
			}
		}

		if (flag == 0)
		{
			break;
		}
	}
}

/*
* ��������
*
* ����˵����
*     a -- �����������
*     l -- �������߽�(���磬����ʼλ�ÿ�ʼ������l=0)
*     r -- ������ұ߽�(���磬�������������ĩβ����r=a.length-1) */
void CAlgorithm::QuickSort(int a[], int l, int r)
{
	if (l > r)
		return;

	int i, j, x;
	i = l;
	j = r;
	x = a[i];

	while (i < j)
	{
		while (i < j && a[j] > x)
		{
			j--;
		}
		if (i < j)
		{
			a[i++] = a[j];
		}

		while (i < j && a[i] < x)
		{
			i++;
		}
		if (i < j)
		{
			a[j--] = a[i];
		}
	}
	a[i] = x;
	QuickSort(a, l, i - 1);
	QuickSort(a, i + 1, r);
}
