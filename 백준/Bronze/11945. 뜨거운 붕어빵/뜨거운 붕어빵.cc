#include <bits/stdc++.h>
using namespace std;

// 0 <= N, M <= 10
int _n, _m; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 두 개의 정수 N과 M이 주어진다.
	cin >> _n >> _m;
	
	vector<string> vs(_n);
	
	// I-2. 둘째 줄부터 N개의 줄에 걸쳐 붕어빵의 모양이 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs[i];
		reverse(vs[i].begin(), vs[i].end());
	}
	
	// O-1. 입력으로 주어진 붕어빵의 좌우로 뒤집힌 모양을 출력하세요. 
	for(int i = 0; i < _n; ++i)
	{
		cout << vs[i] << '\n';
	}
	
	return 0;
}