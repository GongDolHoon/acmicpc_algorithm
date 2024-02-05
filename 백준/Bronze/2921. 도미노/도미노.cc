#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1000
int _n;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 도미노 세트의 크기 N이 주어진다.
	cin >> _n;
	
	for(int i = 0; i <= _n; ++i)
	{
		for(int j = i; j <= _n; ++j)
		{
			_ret += i + j;
		}
	}
	
	// O-1. 크기가 N인 도미노 세트에 찍혀 있는 점의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}