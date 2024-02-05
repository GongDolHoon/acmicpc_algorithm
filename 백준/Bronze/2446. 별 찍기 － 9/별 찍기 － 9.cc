#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	// O-1. 첫째 줄부터 2 * N - 1번째 줄까지 차례대로 별을 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < i; ++j)
		{
			cout << ' ';
		}
		
		for(int j = 0; j < 2 * (_n - i - 1) + 1; ++j)
		{
			cout << '*';
		}
		
		cout << '\n';
	}
	
	for(int i = 0; i < _n - 1; ++i)
	{
		for(int j = 0; j < (_n - 2 - i); ++j)
		{
			cout << ' ';	
		}
		
		for(int j = 0; j < 2 * (i + 1) + 1; ++j)
		{
			cout << '*';
		}
		
		cout << '\n';
	}
	
	return 0;
}