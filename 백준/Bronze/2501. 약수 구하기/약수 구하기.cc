#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 10000
int _n;
// 1 <= K <= N
int _k;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 K가 빈칸을 사이에 두고 주어진다.
	cin >> _n >> _k;
	
	vector<int> _vi;
	
	for(int i = 1; i <= _n; ++i)
	{
		if(_n % i == 0)
		{
			_vi.push_back(i);
		}
	}
	
	// O-1. 첫째 줄에 N의 약수들 중 K번째로 작은 수를 출력한다.
	// O-2. 만일 N의 약수의 개수가 K개보다 적어서 K번째 약수가 존재하지 않을 경우에는
	// 0을 출력하시오. 
	if(_k > _vi.size())
	{
		cout << "0\n";
	}
	else
	{
		cout << _vi[_k - 1] << '\n';
	}
	
	return 0;
}