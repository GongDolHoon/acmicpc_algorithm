#include <bits/stdc++.h>
using namespace std;

int _t;
// 0 < n, m <= 100
int _n, _m;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, n과 m이 주어진다.
		cin >> _n >> _m;
		_ret = 0;
		
		for(int j = 1; j < _n; ++j)
		{
			for(int k = j + 1; k < _n; ++k)
			{
				if(((int)(pow(j, 2) + pow(k, 2) + _m) % (j * k)) == 0)
				{
					_ret++;
				}
			}
		}
		
		// O-1. 각 테스트 케이스마다 문제의 조건을 만족하는 (a, b)쌍의 개수를 출력한다. 	
		cout << _ret << '\n';
	}
	
	return 0;
}