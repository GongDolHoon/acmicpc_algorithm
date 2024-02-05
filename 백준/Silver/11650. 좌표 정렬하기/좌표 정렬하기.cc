#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000
int _n; 

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.first == b.first)
	{
		return a.second < b.second;
	}
	
	return a.first < b.first;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 점의 개수 N이 주어진다.
	cin >> _n;
	
	vector<pair<int, int>> vpii(_n, {0, 0});
	// I-2. 둘째 줄부터 N개의 줄에는 i번점의 위치 x_i와 y_i가 주어진다.  
	int x;
	int y;
	
	for(int i = 0; i < _n; ++i)
	{
		cin >> x >> y;
		vpii[i] ={x, y};	
	}
	
	sort(vpii.begin(), vpii.end(), cmp);
	
	// O-1. 첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다. 
	for(int i = 0; i < vpii.size(); ++i)
	{
		cout << vpii[i].first << ' ' << vpii[i].second << '\n';
	}
	
	return 0;
}