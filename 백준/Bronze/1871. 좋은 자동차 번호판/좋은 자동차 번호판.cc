#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 100
int _n;
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 번호판의 수 N이 주어진다.
	cin >> _n;
	
	// I-2. 다음 N개 줄에는 자동차 번호판이 LLL-DDDD 형식으로 주어진다.
	string l;
	string d;
	
	int i_l;
	int i_d;
	
	for(int i = 0; i < _n; ++i)
	{
		cin >> _s;
		
		l = _s.substr(0, 3);
		d = _s.substr(4, 8);
		
		i_l = (_s[0] - 'A') * 26 * 26 + (_s[1] - 'A') * 26 + (_s[2] - 'A');
		i_d = stoi(d);
		
		int ret = abs(i_l - i_d);
		// O-1. 각각의 자동차 번호판에 대해서, 좋은 번호판이면 "nice"를,
		// 아니면 "not nice"를 출력한다. 	
		if(ret <= 100)
		{
			cout << "nice\n";
		}
		else
		{
			cout << "not nice\n";
		}
	}
	
	
	return 0;
}