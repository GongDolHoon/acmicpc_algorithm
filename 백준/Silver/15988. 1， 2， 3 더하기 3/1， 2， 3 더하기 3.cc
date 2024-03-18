#include <bits/stdc++.h>
using namespace std;

int _t;
// 0 < N <= 1,000,000
int _n;
long long _ret;

vector<long long> _vi_dp(1000001, 0);

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	_vi_dp[0] = 1;
	_vi_dp[1] = 1;
	_vi_dp[2] = 2;
	_vi_dp[3] = 4;
	
	for(int i = 4; i <= 1000000; ++i)
	{
		_vi_dp[i] = (_vi_dp[i-3] + _vi_dp[i-2] + _vi_dp[i-1]) % 1000000009;
	}
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, 정수 N이 주어진다. 
	for(int i = 0; i < _t; ++i)
	{
		_ret = 0;
		cin >> _n;
		
		_ret = _vi_dp[_n] % 1000000009;
		// O-1. 각 테스트 케이스마다, n을 1, 2, 3의 합으로 나타내는 방법의
		// 수를 1,000,000,009로 나눈 나머지를 출력한다.
		cout << _ret << '\n'; 
	}
	
	return 0;
}