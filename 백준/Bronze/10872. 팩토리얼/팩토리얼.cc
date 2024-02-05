#include <bits/stdc++.h>
using namespace std;

// 0 <= N <= 12
int _n;

long long fact(int n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	
	return n * fact(n-1);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정수 N이 주어진다.
	cin >> _n;
	
	// O-1. 첫째 줄에 N!을 출력한다. 
	cout << fact(_n) << '\n';
	
	return 0;
}