#include <bits/stdc++.h>
using namespace std;

long long _ret_a;
long long _ret_b;

long long _prev_a = 1;
long long _prev_b;

// 1 <= K <= 45
int _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 K가 주어진다.
	cin >> _k;
	
	for(int i = 0; i < _k; ++i)
	{
		_ret_b = _prev_a + _prev_b;
		_ret_a = _prev_b;
		
		_prev_a = _ret_a;
		_prev_b = _ret_b;
	}
	
	// O-1. 첫째 줄에 A의 개수와 B의 개수를 공백으로 구분해 출력한다. 
	cout << _ret_a << ' ' << _ret_b << '\n';
	
	return 0;
}