#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	vector<int> _vi(9, 0);
	// I-1. 첫째 줄부터 아홉 번째 줄까지 한 줄에 하나의 자연수가 주어진다.
	for(int i = 0; i < 9; ++i)
	{
		cin >> _vi[i];
	}
	
	int _ret_idx = 0;
	int _ret_max = -1;
	
	for(int i = 0; i < 9; ++i)
	{
		if(_vi[i] > _ret_max)
		{
			_ret_max = _vi[i];
			_ret_idx = i + 1;
		}
	}
	
	// O-1. 첫째 줄에 최댓값을 출력하고, 
	cout << _ret_max << '\n';
	// O-2. 둘째 줄에 최댓값이 몇 번째 수인지 출력한다. 
	cout << _ret_idx << '\n';
	
	return 0;
}