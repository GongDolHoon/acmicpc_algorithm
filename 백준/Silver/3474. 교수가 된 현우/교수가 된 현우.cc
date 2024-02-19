#include <bits/stdc++.h>
using namespace std;

int _t;
// 1 <= N <= 10,0000,0000
int _n;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어지고,
	cin >> _t;
	// I-2. 이어서 T개의 줄에 정수 N이 주어진다.
	for(int i = 0; i < _t; ++i)
	{
		_ret = 0;
		cin >> _n;
		
		long long j = 5;
		while(j <= _n)
		{
			_ret += (_n / j);
			j *= 5;		
		}	
		
	// O-1. 각 줄마다 N!의 오른쪽 끝에 있는 0의 개수를 출력한다. 	
		cout << _ret << '\n';
	}
	
	return 0;
}