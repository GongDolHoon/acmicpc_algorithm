#include <bits/stdc++.h>
using namespace std;

int _t;
// 1 <= N <= 10
int _n;
// 1 <= C <= 6
int _c;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 학기의 수 T가 주어진다.
	cin >> _t;
	
	while(_t--)
	{
		// I-2. 두 번째 줄부터 T개 학기에 대한 정보가 주어진다.
		// I-2-1. 첫 번째 줄에 들었던 과목의 수 N이 주어지고,
		cin >> _n;
		// I-2-2. 다음 N개 줄에 걸쳐서 N개 과목들의 학점 C와 성적 G가 주어진다.
		double _g;
		
		int _ret_c = 0;
		double _ret_g = 0;
		for(int i = 0; i < _n; ++i)
		{
			cin >> _c >> _g;
			_ret_c += _c;
			_ret_g += (_c * _g);
		}
		
		_ret_g /= _ret_c;
		cout << fixed;
		cout.precision(1);
		// O-1. 각 학기에 대해 근우의 총 학점과 평점(GPA)을 출력한다. 	
		cout << _ret_c << ' ' << _ret_g << '\n';
	}
	
	
	return 0;
}