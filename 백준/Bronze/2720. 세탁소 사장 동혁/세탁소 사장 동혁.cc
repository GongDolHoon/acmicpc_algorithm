#include <bits/stdc++.h>
using namespace std;

int _t;
// 1 <= C <= 500
int _c;

int _ret_q;
int _ret_d;
int _ret_n;
int _ret_p;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 거스름돈 C를 나타내는 정수 하나로 이루어져 있다.
		cin >> _c;
		
		_ret_q = 0;
		_ret_d = 0;
		_ret_n = 0;
		_ret_p = 0;
		
		while(_c > 0)
		{
			if(_c >= 25)
			{
				_c -= 25;
				_ret_q++;
			}
			else if(_c >= 10)
			{
				_c -= 10;
				_ret_d++;
			}
			else if(_c >= 5)
			{
				_c -= 5;
				_ret_n++;
			}
			else if(_c >= 1)
			{
				_c -= 1;
				_ret_p++;
			}
		}
		
		// O-1. 각 테스트케이스에 대해 필요한 쿼터의 개수, 다임의 개수, 니켈의 개수, 페니의 개수를 공백으로 구분하여
		// 출력한다. 	
		cout << _ret_q << ' ' << _ret_d << ' ' << _ret_n << ' ' << _ret_p << '\n';
	}
	
	
	return 0;
}