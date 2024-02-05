#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(42, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int tmp;
	// I-1. 첫째 줄부터 열 번째 줄까지 숫자가 한 줄에 하나씩 주어진다.
	for(int i = 0; i < 10; ++i)
	{
		cin >> tmp;
		_vi[tmp % 42]++;
	}
	
	int ret = 0;
	
	for(int i = 0; i < _vi.size(); ++i)
	{
		if(_vi[i] > 0)
		{
			ret++;
		}
	}
	
	// O-1. 첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다. 
	cout << ret << '\n';
	
	return 0;
}