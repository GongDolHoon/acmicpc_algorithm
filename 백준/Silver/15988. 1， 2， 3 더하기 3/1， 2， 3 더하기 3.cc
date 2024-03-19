#include <bits/stdc++.h>
using namespace std;

int _t;
int _n;
long long _ret;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	vector<long long> vll_ret(1000001, 0);
	vll_ret[0] = 1;
	vll_ret[1] = 1;
	vll_ret[2] = 2;
	vll_ret[3] = 4;
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	for(int i = 4; i < vll_ret.size(); ++i)
	{
		vll_ret[i] = (vll_ret[i-1] + vll_ret[i-2] + vll_ret[i-3]) % 1000000009;
	}
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, 정수 n 이 주어진다. 
	for(int i = 0; i < _t; ++i)
	{
		cin >> _n;
		
		_ret = vll_ret[_n];
		// O-1. 각 테스트 케이스마다, n을 1, 2, 3의 합으로 나타내는 방법의 수를
		// 1,000,000,009로 나눈 나머지를 출력한다. 
		cout << _ret << '\n';
	}
		
	return 0;
}