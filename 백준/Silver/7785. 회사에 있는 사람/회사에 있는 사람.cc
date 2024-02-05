#include <bits/stdc++.h>
using namespace std;

// 2 <= n <= 100,000,0
int _n;

string _a;
string _b;

set<string, greater<string>> _ss;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 로그에 기록된 출입 기록의 수 n이 주어진다.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 n개의 줄에는 출입 기록이 순서대로 주어지며,
		// 각 사람의 이름이 주어지고 "enter"나 "leave"가 주어진다.	
		// "enter"인 경우는 출근, "leave"인 경우는 퇴근이다.	
		cin >> _a >> _b;
		
		if(_b == "enter")
		{
			_ss.insert(_a);
		}
		else if(_b == "leave")
		{
			_ss.erase(_a);
		}
	}
	
	// O-1. 현재 회사에 있는 사람의 이름을 사전 순의 역순으로 한 줄에 한 명씩 출력한다. 
	for(auto s: _ss)
	{
		cout << s << '\n';
	}
	
	return 0;
}