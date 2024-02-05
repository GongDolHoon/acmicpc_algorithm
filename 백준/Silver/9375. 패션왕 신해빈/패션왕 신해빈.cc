#include <bits/stdc++.h>
using namespace std;

// 0 <= N <= 30
int _n; 
int _t;
int _ret;

map<string, int> _mss;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스가 주어진다.
	cin >> _t;
	string a, b;
	for(int i = 0; i < _t; ++i)
	{
		_ret = 1;
		_mss.clear();
		// I-2. 각 테스트 케이스의 첫째 줄에는 해빈이가 가진 의상의 수 n이 주어진다.
		cin >> _n;
		// I-3. 다음 n개에는 해빈이가 가진 의상의 이름과 의상의 종류가 공백으로 구분되어 주어진다.
		for(int j = 0; j < _n; ++j)
		{
			cin >> a >> b;
			
			if(_mss.find(b) == _mss.end())
			{
				_mss[b] = 1;
			}
			else
			{
				_mss[b]++;
			}
		}
		
		for(auto element: _mss)
		{
			_ret *= (element.second + 1);
		}
		
		_ret -= 1;
		// O-1. 각 테스트 케이스에 대해 해빈이가 알몸이 아닌 상태로 의상을 입을 수 있는 경우를
		// 출력하시오 	
		cout << _ret << '\n';
	}
	
	return 0;
}