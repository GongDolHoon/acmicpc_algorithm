#include <bits/stdc++.h>
using namespace std;

// 1 <= N_a, N_b <= 200,000
int _n_a;
int _n_b;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 집합 A의 원소의 개수와 집합 B의 원소의 개수가 빈 칸을 사이에 두고 주어진다.
	cin >> _n_a >> _n_b;
	
	map<int, int> mii;
	int tmp;
	// I-2. 둘째 줄에는 집합 A의 모든 원소가,
	for(int i = 0; i < _n_a; ++i)
	{
		cin >> tmp;
		mii[tmp] = 1;
	}
	
	// I-3. 셋째 줄에는 집합 B의 모든 원소가 빈 칸을 사이에 두고 각각 주어진다.
	for(int i = 0; i < _n_b; ++i)
	{
		cin >> tmp;
		if(mii.find(tmp) != mii.end())
		{
			mii[tmp]++;
		}
	}
	
	_ret = _n_a + _n_b;
	
	for(auto ii: mii)
	{
		if(ii.second == 2)
		{
			_ret -= 2;
		}
	}
	
	// O-1. 첫째 줄에 대칭 차집합의 원소의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}