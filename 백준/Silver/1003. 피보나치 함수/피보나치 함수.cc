#include <bits/stdc++.h>
using namespace std;

int _t;
// 0 <= n <= 40 
int _n;
int _ret_zero;
int _ret_one;

vector<pair<int, int>> _vii_fibo(41);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	_vii_fibo[0] = {1, 0};
	_vii_fibo[1] = {0, 1};
	for(int i = 2; i < 41; ++i)
	{
		_vii_fibo[i].first = _vii_fibo[i-1].first + _vii_fibo[i-2].first;
		_vii_fibo[i].second = _vii_fibo[i-1].second + _vii_fibo[i-2].second;
	}
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다.  
	for(int i = 0; i < _t; ++i)
	{
		cin >> _n;
		
		_ret_zero = _vii_fibo[_n].first;
		_ret_one = _vii_fibo[_n].second;
		
	// O-1. 각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.
		cout << _ret_zero << ' ' << _ret_one << '\n';
	} 
	
	return 0;
}