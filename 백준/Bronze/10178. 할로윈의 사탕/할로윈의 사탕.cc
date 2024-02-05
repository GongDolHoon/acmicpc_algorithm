#include <bits/stdc++.h>
using namespace std;

int _t;
int _c;
int _v;

int _ret_a;
int _ret_b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 가장 첫 번째 줄에는 테스트 케이스의 수가 입력되고,
	cin >> _t;
	
	while(_t--)
	{
		// I-2. 각 테스트 케이스마다 사탕의 개수 C와 형제의 수 V가 차례대로 입력된다.
		cin >> _c >> _v;
		
		_ret_a = _c / _v;
		_ret_b = _c % _v;
		
		// O-1. 출력은 예제를 보고 "You get _ piece(s) and your dad gets _ piece(s)."
		// 형식에 맞추어 적절하게 출력하라. 	
		cout << "You get " << _ret_a << " piece(s) and your dad gets "
			<< _ret_b << " piece(s).\n";
	}
	
	
	return 0;
}