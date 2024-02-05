#include <bits/stdc++.h>
using namespace std;

int _t;

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다. 
	cin >> _t;
	// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, 배열 A의 원소 10개가 공백으로 구분되어 주어진다. 
	// 이 원소는 1보다 크거나 같고, 1,000보다 작거나 같은 자연수이다.
	for(int i = 0; i < _t; ++i)
	{
		vector<int> vi(10, 0);
		for(int j = 0; j < 10; ++j)
		{
			cin >> vi[j];		
		}		
		
		sort(vi.begin(), vi.end(), cmp);
		
		// O-1. 각 테스트 케이스에 대해 한 줄에 하나씩 배열 A에서 3번째 큰 값을 출력한다.	
		cout << vi[7] << '\n';
	}		
		
	return 0;
}