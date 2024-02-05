#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000,000,000,000
long long _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	// O-1. 상근이가 게임을 이기면 SK를,
	// 창영이가 게임을 이기면 CY을 출력한다. 
	if(_n % 2 == 1)
	{
		cout << "SK\n";
	}
	else
	{
		cout << "CY\n";
	}
	
	return 0;
}