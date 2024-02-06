#include <bits/stdc++.h>
using namespace std;

// 1 <= min <= 1,000,000,000,000
// min <= max <= min + 1,000,000
long long _min, _max;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 두 정수 min과 max가 주어진다.
	// 15 15 
	cin >> _min >> _max;
	// vb(1)
	vector<bool> vb(_max - _min + 1, false);
	
	// i = 2, 3 
	for(int i = 2; i <= (int)(sqrt(_max)); ++i)
	{
		// base = 4, 9
		long long base = (long long)i * (long long)i;
		// start = 3, 1
		long long start = _min / base;
		if(start * base < _min)
		{
			start = (start + 1) * base; 
		}
		else
		{
			start = start * base;
		}
		
		for(long long j = start - _min; j < _max - _min + 1; j += base)
		{
			vb[j] = true;
		}
	}
	
	for(int i = 0; i < _max-_min+1; ++i)
	{
		if(vb[i] == false)
		{
			_ret++;
		}
	}
	// O-1. 첫째 줄에 min보다 크거나 같고, max보다 작거나 같은 제곱ㄴㄴ수의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}