// maxsubsequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int MaxSubSequence(int a[], int n)
{
	int maxsum , thisum ;
	maxsum = thisum = 0;
	for (int i = 0; i < n; i++)
	{
		thisum += a[i];
		if (thisum > maxsum)
			maxsum = thisum;
		else if (thisum < 0)
			thisum = 0;
	}
	return maxsum;
}
int main()
{
	int k ;
	int a[100000];
	cin >> k; 
	for(int i=0;i<k;i++)
	{
		cin >> a[i];
	}
	
	cout << MaxSubSequence(a, k) << endl;
}

