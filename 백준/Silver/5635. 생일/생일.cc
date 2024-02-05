#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 100)
int _n; 
// 1990 <= y <= 2010
int _y;
// 1 <= m <= 12
int _m;
// 1 <= d <= 31
int _d;
string _name;

string _ret_min;
string _ret_max;

bool compare(tuple<string, int, int, int> a, tuple<string, int, int, int> b)
{
	if(get<1>(a) == get<1>(b))
	{
		if(get<2>(a) == get<2>(b))
		{
			return get<3>(a) < get<3>(b);
		}
		return get<2>(a) < get<2>(b);
	}
	return get<1>(a) < get<1>(b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 반에 있는 학생의 수 n이 주어진다.
	cin >> _n;
	
	vector<tuple<string, int, int, int>> _vt(_n);
	// I-2. 다음 n개 줄에는 각 학생의 이름과 생일이 "이름 dd mm yyyy"와 같은 형식으로 주어진다.
	while(_n--)
	{
		cin >> _name >> _d >> _m >> _y;
		
		_vt[_n] = make_tuple(_name, _y, _m, _d);
	}
	
	sort(_vt.begin(), _vt.end(), compare);
	_ret_min = get<0>(_vt[_vt.size() - 1]);
	_ret_max = get<0>(_vt[0]);
	// O-1. 첫째 줄에 가장 나이가 적은 사람의 이름,
	cout << _ret_min << '\n';
	// O-2. 둘째 줄에 가장 나이가 많은 사람의 이름을 출력한다. 
	cout << _ret_max << '\n';
	
	return 0;
}