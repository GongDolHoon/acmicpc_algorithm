#include <bits/stdc++.h>
using namespace std;

int _t;
// -10^9 <= n <= m <= 10^9
long long _m, _n; 

long long _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, n과 m이 주어진다.
		cin >> _n >> _m;
		
		if((_m - _n) % 2 == 0)
		{
			_ret = (_n + _m) * ((_m - _n) / 2) + (_n + _m) / 2;	
		}
		else
		{
			_ret = (_n + _m) * ((_m - _n + 1) / 2);	
		}
		
		// O-1. 각 테스트 케이스마다 "Scenario #i:"를 출력한 다음, n부터 m까지의 모든 
		// 정수의 합을 출력한다. 각 테스트 케이스 사이에는 빈 줄을 하나 출력한다. 	
		cout << "Scenario #" << i + 1 << ":\n";
		cout << _ret << "\n\n";
	}
	
	return 0;
}