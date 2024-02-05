#include <bits/stdc++.h>
using namespace std;

// 1 <= _a, _b <= 10000
int _a;
int _b;

int get_gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	
	return get_gcd(b, a % b);
}

long long get_lcm(int a, int b)
{
	return a * b / get_gcd(a, b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 두 개의 자연수가 주어진다.
	cin >> _a >> _b;
	
	// O-1. 첫째 줄에는 입력으로 주어진 두 수의 최대공약수를,
	cout << get_gcd(_a, _b) << '\n';
	
	// O-2. 둘째 줄에는 입력으로 주어진 두 수의 최소공배수를 출력한다. 
	cout << get_lcm(_a, _b) << '\n';
	
	return 0;
}