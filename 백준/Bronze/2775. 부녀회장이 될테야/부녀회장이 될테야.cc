#include <bits/stdc++.h>
using namespace std;

int _t;
// 1 <= k, n <= 14
int _k;
int _n;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 Test case의 수 T가 주어진다.
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2-1. 그리고 각각의 케이스마다 입력으로 첫 번째 줄에 정수 k,
		// I-2-2. 두 번째 줄에 정수 n이 주어진다.
		cin >> _k >> _n;
		_ret = 0;
	
		vector<vector<int>> vvi(_k + 1, vector<int>(_n + 1));
		
		for(int j = 0; j <= _n; ++j)
		{
			vvi[0][j] = j;
		}
		
		for(int j = 1; j <= _k; ++j)
		{
			for(int k = 0; k <= _n; ++k)
			{
				vvi[j][k] = accumulate(vvi[j - 1].begin(), vvi[j-1].begin() + k + 1, 0);
			}
		}
		
		_ret = vvi[_k][_n];
		
		// O-1. 각각의 Test case에 대해서 해당 집에 거주민 수를 출력하라. 	
		cout << _ret << '\n';
	}
	
	return 0;
}