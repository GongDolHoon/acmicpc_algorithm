#include <bits/stdc++.h>
using namespace std;

// 1 <= A <= B <= 1,000
int _a, _b;

vector<int> _vi;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 한 줄에 양의 정수 A와 B가 주어진다.
	cin >> _a >> _b;
	
	for(int i = 0; i < 1000; ++i)
	{
		for(int j = 0; j <= i; ++j)
		{
			_vi.push_back(i + 1);
		}
	}
	
	for(int i = _a - 1; i < _b; ++i)
	{
		_ret += _vi[i];
	}
	
	// O-1. 희주가 대답해야 할 정답을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}