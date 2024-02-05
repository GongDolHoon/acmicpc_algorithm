#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;
// -100 <= V <= 100
int _v;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정수의 개수 N이 주어진다. 
	cin >> _n;
	
	vector<int> vi(_n, 0);
	// I-2. 둘째 줄에는 정수가 공백으로 구분되어져 있다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi[i];
	}
	
	// I-3. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다.
	cin >> _v;
	
	int ret = 0;
	
	for(int i = 0; i < vi.size(); ++i)
	{
		if(vi[i] == _v)
		{
			ret++;
		}
	}
	
	// O-1. 첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다. 
	cout << ret << '\n';
	
	return 0;
}