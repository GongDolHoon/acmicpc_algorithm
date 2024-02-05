#include <bits/stdc++.h>
using namespace std;

// T <= 25
int _t;

// 1 <= N <= 300
// M <= N <= 2M
int _n, _m;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 총 테스트 케이스의 수 (T <= 25)
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 둘째 줄부터 T+1째 줄까지 매줄마다 모든 닭의 다리수의 합 N과 닭의 수 M이 공백을 간격으로 입력된다.
		cin >> _n >> _m;
		
		int u = 0;
		int t = 0;
		
		u = _m * 2 - _n;
		t = _m - u;
		
		// O-1. 테스트 케이스마다 한줄에 다리가 잘린 닭의 수 U와 멀쩡한 닭의 수 T를 공백을 간격으로 출력한다. 	
		cout << u << ' ' << t << '\n';
	}
	
	
	return 0;
}