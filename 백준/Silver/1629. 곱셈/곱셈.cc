#include <bits/stdc++.h>
using namespace std;

// A, B, C는 모두 2,147,483,647 이하의 자연수이다. 
long long _a;
long long _b;
long long _c;

long long _ret;

long long GetModular(long long exponent)
{
	if(exponent == 0)
	{
		return 1;
	}
	if(exponent == 1)
	{
		return _a % _c;
	}
	
	long long ll = GetModular(exponent / 2) % _c;
	
	if(exponent % 2 == 0)
	{
		return (ll * ll) % _c;
	}
	else
	{
		return (ll * ll) %_c * _a % _c; 
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 A, B, C가 빈 칸을 사이에 두고 순서대로 주어진다.
	cin >> _a >> _b >> _c;
	
	_ret = GetModular(_b);
	
	// O-1. 첫째 줄에 A를 B번 곱한 수를 C로 나눈 나머지를 출력한다.	
	cout << _ret << '\n';
	
	return 0;
}