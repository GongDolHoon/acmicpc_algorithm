#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10
int _n;
// 1 <= K <= 100,000,000
int _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 K가 주어진다.
	cin >> _n >> _k;
	vector<int> vi(_n, 0);
	// I-2. 둘째 줄부터 N개의 줄에 동전의 가치 A_i가 오름차순으로 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi[_n - i - 1];
	}
	
	int ret = 0;
	while(_k > 0)
	{
		for(int i = 0; i < _n; ++i)
		{
			if(_k >= vi[i])
			{
				_k -= vi[i];
				ret++;
				break;
			}
		}
	}
	
	// O-1. 첫째 줄에 K원을 만드는데 필요한 동전 개수의 최솟값을 출력한다. 
	cout << ret << '\n';
	
	return 0;
}