#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 100
int _n;

int _ret_sum;
int _ret_min = INT_MAX;

bool trigger = false;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄부터 일곱 번째 줄까지 한 줄에 하나의 자연수가 주어진다.
	for(int i = 0; i < 7; ++i)
	{
		cin >> _n;
		
		if(_n % 2 == 1)
		{
			trigger = true;
			_ret_sum += _n;
			
			if(_ret_min > _n)
			{
				_ret_min = _n;
			}
		}
	}
	
	// O-1. 홀수가 존재하지 않는 경우에는 첫째 줄에 -1을 출력한다.
	if(trigger == false)
	{
		cout << "-1\n";
		return 0;
	}
	// O-2. 홀수가 존재하는 경우 첫째 줄에 홀수들의 합을 출력하고,
	// O-3. 둘째 줄에 홀수들 중 최솟값을 출력한다. 
	else
	{
		cout << _ret_sum << '\n';
		cout << _ret_min << '\n';
	}
	
	return 0;
}