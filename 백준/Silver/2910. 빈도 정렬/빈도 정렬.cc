#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 1,000
// 1 <= c <= 1,000,000,000
int _n, _c;

map<int, int> _mii_cnt;

bool cmp(const tuple<int, int, int> a, const tuple<int, int, int> b)
{
	if(get<1>(a) == get<1>(b))
	{
		return get<2>(a) < get<2>(b);	
	}
	
	return get<1>(a) > get<1>(b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 메시지의 길이 N과 C가 주어진다.
	cin >> _n >> _c;	
	// I-2. 둘째 줄에 메시지 수열이 주어진다.
	int tmp;
	int x, y, z;
	vector<tuple<int, int, int>> vt;
	for(int i = 0; i < _n; ++i)
	{
		bool trig = false;
		cin >> tmp;
		
		for(int j = 0; j < vt.size(); ++j)
		{
			tie(x, y, z) = vt[j];
			
			if(x == tmp)
			{
				vt[j] = make_tuple(x, ++y, z);
				trig = true;
			}
		}
		
		if(trig == false)
		{
			vt.push_back(make_tuple(tmp, 1, i));
		}
	}
	
	sort(vt.begin(), vt.end(), cmp);
	
	vector<int> ret;
	
	for(auto tup : vt)
	{
		for(int i = 0; i < get<1>(tup); ++i)
		{
			ret.push_back(get<0>(tup));	
		}	
	}
	
	// O-1. 첫째 줄에 입력으로 주어진 수열을 빈도 정렬한 다음 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		cout << ret[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}