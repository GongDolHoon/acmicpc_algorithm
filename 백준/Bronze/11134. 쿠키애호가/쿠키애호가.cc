#include <bits/stdc++.h>
using namespace std;

// 0 < T < 100
int _t;
// 0 < N < 1,000,000,000
int _n;
// 0 < C < 5,000
int _c;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 테스트케이스의 개수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 그 다음 줄부터 T개의 줄에 테스트 케이스가 한 줄씩 주어진다.  
		// 테스트 케이스는 철수가 가진 쿠키의 개수 N과 날마다 먹는 쿠키의 개수 C로 이루어져 있다.
		cin >> _n >> _c;
		
		// O-1. 각 테스트케이스마다 한 줄씩 철수가 며칠동안 쿠키를 먹을 수 있는지를 출력한다. 
		cout << (int)(ceil(_n / (double)(_c))) << '\n';
	}
	
	return 0;
}