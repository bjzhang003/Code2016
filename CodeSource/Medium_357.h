#pragma once
/*
Given a non-negative integer n, count all numbers with unique digits, x, where 0 ≤ x < 10n.

Example:
Given n = 2, return 91. (The answer should be the total numbers in the range of 0 ≤ x < 100, 
excluding [11,22,33,44,55,66,77,88,99])

Hint:

1、A direct way is to use the backtracking approach.
2、Backtracking should contains three states which are (the current number, number 
   of steps to get that number and a bitmask which represent which number is marked as 
   visited so far in the current number). Start with state (0,0,0) and count all valid 
   number till we reach number of steps equals to 10n.
3、This problem can also be solved using a dynamic programming approach and some knowledge of combinatorics.
4、Let f(k) = count of numbers with unique digits with length equals k.
5、f(1) = 10, ..., f(k) = 9 * 9 * 8 * ... (9 - k + 2) [The first factor is 9 because a number cannot start with 0].
*/
#include<iostream>
#include<vector>
using namespace std;
//success
/*
这道题目我是采用DP的方法来做的
*/
class Count_Numbers_With_Unique_Digits {
public:
	int countNumbersWithUniqueDigits(int n)
	{
		//当n为0的时候，数据只有0，此时选择一个
		int result = 1;
		if (n > 0)
		{
			int *AllData = new int[n + 1];
			AllData[0] = 1;
			AllData[1] = 10;
			for (int i = 2; i <= n; i++)
			{
				int temp = 9;
				for (int j = 1; j < i; j++)
				{
					temp = temp*(9 - j + 1);
				}
				AllData[i] = AllData[i - 1] + temp;
			}
			result = AllData[n];
		}
		cout << "result = " << result << endl;
		return result;
	}
};
/*
Count_Numbers_With_Unique_Digits Test;
Test.countNumbersWithUniqueDigits(0);
*/