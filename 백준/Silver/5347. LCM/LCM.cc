#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	
	return gcd(b, a % b);
}

long long lcm(int a, int b)
{
	return (long long)a * b / gcd(a, b);
}

int _n;

int _a;
int _b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 n이 주어진다.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 n개 줄에는 a와 b가 주어진다.
		cin >> _a >> _b;
		
		// O-1. 각 테스트 케이스에 대해서 입력으로 주어진 두 수의 최소공배수를 출력한다. 		
		cout << lcm(_a, _b) << '\n';
	}
	
	return 0;
}