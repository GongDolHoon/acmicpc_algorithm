#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 9
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	// O-1. 출력형식과 같게 N*1부터 N*9까지 출력한다. 
	for(int i = 1; i < 10; ++i)
	{
		cout << _n << " * " << i << " = " << _n * i << '\n';
	}
	
	return 0;
}