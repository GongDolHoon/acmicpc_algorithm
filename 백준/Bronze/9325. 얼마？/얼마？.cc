#include <bits/stdc++.h>
using namespace std;

int _t;
// 1 <= s <= 100,000
int _s;
// 0 <= n <= 1000
int _n;
// 1 <= q <= 100
int _q;
// 1 <= p <= 10000
int _p;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수가 주어진다.
	 cin >> _t;
	while(_t--)
	{
		_ret = 0;
		// I-2. 각 테스트 케이스의 첫 줄엔 자동차의 가격 s가 주어진다.
		cin >> _s;
		_ret += _s;
		// I-3. 둘째 줄엔 해빈이가 구매하려고 하는 서로 다른 옵션의 개수 n이 주어진다.
		cin >> _n;
		// I-4. 뒤이어 n개의 줄이 입력으로 들어온다. 
		// 각 줄은 q와 p로 이루어져 있는데, q는 해빈이가 사려고 하는 특정 옵션의 개수이고,
		// p는 해당 옵션의 가격이다. 	
		while(_n--)
		{
			cin >> _q >> _p;
			_ret += _q * _p;
		}
		
		// O-1. 각 테스트 케이스마다, 해빈이가 최종적으로 구매하려는 자동차의 가격을 출력 
		cout << _ret << '\n';
	}
	
	return 0;
}