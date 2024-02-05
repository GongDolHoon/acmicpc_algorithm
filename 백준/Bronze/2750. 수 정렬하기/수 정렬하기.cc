#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1000
int _n;

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 수의 개수 N이 주어진다.
	cin >> _n;	
	// I-2. 둘째 줄부터 N개의 줄에는 수가 주어진다.
	vector<int> vi(_n, 0);
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi[i];
	}
	
	sort(vi.begin(), vi.end(), cmp);
	
	// O-1. 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다. 
	for(int i: vi)
	{
		cout << i << '\n';
	}
	
	return 0;
}