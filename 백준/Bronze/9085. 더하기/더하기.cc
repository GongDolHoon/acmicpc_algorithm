#include <bits/stdc++.h>
using namespace std;

// 1 <= t <= 10
int _t;
// 1 <= N <= 100
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수가 주어진다.
	cin >> _t;
	
	while(_t--)
	{
		// I-2. 각 테스트 케이스는 첫 줄에 자연수의 개수 N이 주어지고,
		cin >> _n;
		vector<int> _vi(_n, 0);
		int _ret = 0;
		// I-3. 그 다음 줄에는 N개의 자연수가 주어진다.	
		for(int i = 0; i < _n; ++i)
		{
			cin >> _vi[i];
			_ret += _vi[i];
		}
		// O-1. 각 테스트 케이스에 대해서 주어진 자연수의 합을 한 줄에 하나씩 출력한다. 
		cout << _ret << '\n';	
	}	
	
	return 0;
}