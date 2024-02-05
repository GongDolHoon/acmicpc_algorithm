#include <bits/stdc++.h>
using namespace std;

// _2,000,000,000 <= N, M <= 2,000,000,000
long long _n, _m;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 두 도메인의 유명도 N과 M이 주어진다.
	cin >> _n >> _m;
	
	// O-1. 첫째 줄에 두 유명도의 차이 (|N-M|)을 출력한다. 
	cout << abs(_n - _m) << '\n';
	
	return 0;
}