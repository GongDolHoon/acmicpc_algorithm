#include <bits/stdc++.h>
using namespace std;

// 7 <= h <= 22
int _h1, _h2;
// 0 <= m <= 59
int _m1, _m2;
// 0 <= s <= 59
int _s1, _s2;

int _ret_h;
int _ret_m;
int _ret_s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 0; i < 3; ++i)
	{
		// I-1. 첫 번째 줄에는 A씨의 출근 시간과 퇴근 시간,
		// I-2. 두 번째 줄에는 B씨의 출근 시간과 퇴근 시간,
		// I-3. 세 번째 줄에는 C씨의 출근 시간과 퇴근 시간이 각각 공백으로 구분되어 있다.
		cin >> _h1 >> _m1 >> _s1 >> _h2 >> _m2 >> _s2;
		_ret_s = 0;
		_ret_m = 0;
		_ret_h = 0;
		
		_ret_s = _s2 - _s1;
		if(_ret_s < 0)
		{
			_ret_s += 60;
			_ret_m--;
		}
		
		_ret_m += (_m2 - _m1);
		if(_ret_m < 0)
		{
			_ret_m += 60;
			_ret_h--;
		}
		
		_ret_h += (_h2 - _h1);
		
		// O-1. 첫 번째 줄에 A씨의 근무 시간,
		// O-2. 두 번째 줄에 B씨의 근무 시간,
		// O-3. 세 번째 줄에 C씨의 근무 시간을 출력하라.
		// 근무  시간이 h시간 m분 s초이면, h, m, s의 순으로 공백으로 분리하여 출력하라. 	
		cout << _ret_h << ' ' << _ret_m << ' ' << _ret_s << '\n';
	} 
	
	return 0;
}