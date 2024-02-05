#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> _vp(8);
set<int> _si;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second > b.second;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int score;
	// I-1. 8개 줄에 걸쳐서 각 문제에 대한 참가자의 점수가 주어진다.
	for(int i = 0; i < 8; ++i)
	{
		cin >> score;
		_vp[i] = {i + 1, score};
	}
	
	sort(_vp.begin(), _vp.end(), cmp);
	
	int total = 0;
	
	for(int i = 0; i < 5; ++i)
	{
		total += _vp[i].second;
		_si.insert(_vp[i].first);	
	}
	
	// O-1. 첫째 줄에 참가자의 총점을 출력한다.
	cout << total << '\n';
	// O-2. 둘째 줄에는 어떤 문제가 최종 점수에 포함되는지를 공백으로 구분하여 출력한다. 
	// 출력은 문제 번호가 증가하는 순서이어야 한다.  
	for(int i: _si)
	{
		cout << i << ' ';
	}
	cout << '\n';
	
	return 0;
}