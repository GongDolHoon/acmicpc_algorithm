#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000,000
int _n;

// 0 <= A, B <= 100
int _a;
int _b;

int _ret_a;
int _ret_b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 정수 N이 주어진다.
	cin >> _n;
	
	// I-2. 둘째 줄부터는 정수 A_i, B_i가 공백을 사이에 두고 차례대로 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> _a >> _b;	
		
		if(_a > _b)
		{
			_ret_a++;
		}
		else if(_a < _b)
		{
			_ret_b++;
		}
	}
	
	// O-1. 첫째 줄에 A가 이긴 횟수와 B가 이긴 횟수를 차례대로 출력하라. 
	cout << _ret_a << ' ' << _ret_b << '\n';
	
	return 0;
}