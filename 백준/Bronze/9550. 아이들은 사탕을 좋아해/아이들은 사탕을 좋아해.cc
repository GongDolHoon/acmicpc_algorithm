#include <bits/stdc++.h>
using namespace std;

// 1 <= t <= 100
int _t;

// 1 <= N, K <= 100
int _n, _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 줄에 테스트 케이스의 수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		int ret = 0;
		int num;
		// I-2=1. 각 테스트 케이스의 첫 줄엔 승택이가 갖고 있는 사탕의 종류의 수 N가 K가 주어진다.
		cin >> _n >> _k;
		// I-2-2. 두 번째 줄엔 N개의 정수로 승택이가 각 종류의 사탕을 몇 개 갖고 있는지가 주어진다.
		for(int j = 0; j < _n; ++j)
		{
			cin >> num;
			ret += num / _k;
		}
		// O-1. 각 테스트 케이스마다 생일파티에 최대 몇 명의 아이들이 참석할 수 있는지
		// 하나의 정수로 출력한다. 	
		cout << ret << '\n';
	}
	
	return 0;
}