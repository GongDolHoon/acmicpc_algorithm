#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 1000
int _t;

// 1 <= A, B <= 1000
int _a;
int _b;

int _ret_gcd;
int _ret_lcm;

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 두 정수 a와 b로 이루어져 있고, 공백으로 구분되어 있다.
		cin >> _a >> _b;
		
		_ret_gcd = gcd(_a, _b);
		_ret_lcm = lcm(_a, _b);
		
		// O-1. 각 테스트 케이스에 대해 최소공배수와 최대공약수를 차례대로 출력한다. 	
		cout << _ret_lcm << ' ' << _ret_gcd << '\n';
	}
	
	return 0;
}