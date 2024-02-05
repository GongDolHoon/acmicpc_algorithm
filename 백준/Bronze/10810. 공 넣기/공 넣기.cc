#include <bits/stdc++.h>
using namespace std;

// 1 <= N, M <= 100
int _n, _m; 

// 1 <= i <= j <= N, 1 <= k <= N
int _i, _j, _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 M이 주어진다.
	cin >> _n >> _m;
	vector<int> vi(_n, 0);
	
	for(int i = 0; i < _m; ++i)
	{
		// I-2. 둘째 줄부터 M개의 줄에 걸쳐서 공을 넣는 방법이 주어진다.
		// I-2-1. 각 방법은 세 정수 i j k로 이루어져 있으며, i번째 바구니부터 j번째 바구니까지에 k번 번호가
		// 적혀있는 공을 넣는다는 뜻이다. 
		cin >> _i >> _j >> _k;
		
		for(int j = _i - 1; j < _j; ++j)
		{
			vi[j] = _k;
		}
	}
	
	// O-1. 1번 바구니부터 N번 바구니에 들어있는 공의 번호를 공백으로 구분해 출력한다.
	// 공이 들어있지 않은 바구니는 0을 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		cout << vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}