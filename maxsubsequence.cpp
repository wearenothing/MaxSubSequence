#include "pch.h"
#include <iostream>
using namespace std;
int MaxSubSequence(int a[], int n, int *right, int *left)
{
	int maxsum, thisum;
	maxsum = thisum = 0;
	*right = a[n-1];
	*left = a[0];
	int thisleft = 0;
	for (int i = 0; i < n; i++)
	{
		thisum += a[i];
		if (thisum > maxsum)
		{
			maxsum = thisum;
			*right = a[i];
			*left = a[thisleft];
		}

		else if (thisum < 0)
		{
			thisum = 0;
			thisleft = i + 1;
		}

	}
	return maxsum;
}
int main()
{
	int k;
	int a[100000];
	int right, left;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> a[i];
	}

	cout << MaxSubSequence(a, k, &right, &left) << " ";
	cout << left << " " << right << endl;
}


