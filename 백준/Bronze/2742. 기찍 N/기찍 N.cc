#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 자연수 N이 주어진다.
	cin >> _n;
	
	// O-1. 첫째 줄부터 N번째 줄까지 차례대로 출력한다. 
	while(_n)
	{
		cout << _n-- << '\n';
	}
	
	return 0;
}