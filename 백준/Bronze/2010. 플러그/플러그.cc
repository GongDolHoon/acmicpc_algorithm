#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 500,000
int _n;

// 1 <= p <= 999
int _p;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 멀티탭의 개수 N이 주어진다.
	cin >> _n;
	
	// I-2. 둘째 줄부터 N개의 줄에 걸쳐 각 멀티탭이 몇 개의 플러그를 꽂을 수 있도록 되어있는지
	// 나타내는 자연수가 주어진다.
	while(_n--)
	{
		cin >> _p;
		
		_ret += (_p - 1);
	}
	
	// O-1. 첫째 줄에 최대로 전원에 연결될 수 있는 컴퓨터의 수를 출력한다. 
	cout << _ret + 1 << '\n';
	
	return 0;
}