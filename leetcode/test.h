#pragma once
#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<unordered_set>
using namespace std;




class Solution {
public:
	int movingCount(int m, int n, int k) {
		int _res = 0;
		int i = 0;
		int j = 0;
		if (compare(i, j, k))
		{
			_res++;
		}
	}

	bool compare(int i, int j, int k)
	{
		int _res = 0;
		while (i != 0)
		{
			_res += i % 10;
			i /= 10;
		}
		while (j != 0)
		{
			_res += j % 10;
			j /= 10;
		}
		if (_res <= k)
			return true;
		return false;
	}
};


