#pragma once
/*
There are n bulbs that are initially off.
You first turn on all the bulbs.
Then, you turn off every second bulb.
On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on).
For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb.
Find how many bulbs are on after n rounds.

Example:
Given n = 3.
At first, the three bulbs are [off, off, off].
After first round, the three bulbs are [on, on, on].
After second round, the three bulbs are [on, off, on].
After third round, the three bulbs are [on, off, off].

So you should return 1, because there is only one bulb is on.
*/
#include<iostream>
using namespace std;
/*
http://my.oschina.net/Tsybius2014/blog/599157
http://www.2cto.com/kf/201603/491464.html
http://blog.csdn.net/baidu_23318869/article/details/50386323

这个算法的想法和精巧，我应当好好研究一下
*/
class Bulb_Switcher {
public:
	int bulbSwitch(int n)
	{
		return (int)sqrt(n);
	}
};