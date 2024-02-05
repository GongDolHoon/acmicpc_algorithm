#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 50
int _n;

bool cmp_1(int a, int b)
{
	return a < b;
}

bool cmp_2(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	
	vector<int> vi_a(_n, 0);
	vector<int> vi_b(_n, 0);
	
	// I-2. 둘째 줄에는 A에 있는 N개의 수가 순서대로 주어지고
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi_a[i];
	}
	
	// I-3. 셋째 줄에는 B에 있는 수가 순서대로 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> vi_b[i];
	}
	
	sort(vi_a.begin(), vi_a.end(), cmp_1);
	sort(vi_b.begin(), vi_b.end(), cmp_2);
	
	int ret = 0;
	
	for(int i = 0; i < _n; ++i)
	{
		ret += vi_a[i] * vi_b[i];
	}
	
	// O-1. 첫째 줄에 S의 최솟값을 출력한다. 
	cout << ret << '\n';
	
	return 0;
}