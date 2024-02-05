#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000
int _n;

// -100,000 <= x, y <= 100,000
int _x;
int _y;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 점의 개수 n이 주어진다.
	cin >> _n;
	
	vector<pair<int, int>> vii(_n);
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄부터 N개의 줄에는 i번점의 위치 x와 y가 주어진다.
		cin >> _x >> _y;	
		
		vii[i] = {_x, _y};
	}
	
	sort(vii.begin(), vii.end(), cmp);
	
	// O-1. 첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다. 
	for(int i = 0; i < vii.size(); ++i)
	{
		cout << vii[i].first << ' ' << vii[i].second << '\n';
	}
	
	return 0;
}