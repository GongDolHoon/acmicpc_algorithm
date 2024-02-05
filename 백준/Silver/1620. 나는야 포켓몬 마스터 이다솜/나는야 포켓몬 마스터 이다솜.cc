#include <bits/stdc++.h>
using namespace std;

// 1 <= N, M <= 100,000
int _m;
int _n;

map<string, string> _mis_num;
map<string, string> _mis_name;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 도감이 수록되어 있는 포켓몬의 개수 N이랑 내가 맞춰야 하는 문제의 개수 M이 주어져.
	cin >> _n >> _m;
	string s;
	// I-2. 둘째 줄부터 N개의 줄에 포켓몬의 번호가 1번인 포켓몬부터 N번인 포켓몬까지 한 줄에 하나씩 입력으로 들어와.
	for(int i = 0; i < _n; ++i)
	{
		cin >> s;
		_mis_num[to_string(i + 1)] = s;
		_mis_name[s] = to_string(i + 1);
	}
	
	// O-1. 첫째 줄부터 차례대로 M 개의 줄에 각각의 문제에 대한 답을 말해줬으면 좋겠어. 
	// 입력으로 숫자가 들어왔다면 그 숫자에 해당하는 포켓몬의 이름을, 
	// 문자가 들어왔으면 그 포켓몬의 이름에 해당하는 번호를 출력하면 돼!  
	for(int i = 0; i < _m; ++i)
	{
		cin >> s;
		if(_mis_num.find(s) != _mis_num.end())
		{
			cout << _mis_num[s] << '\n';
		}
		
		if(_mis_name.find(s) != _mis_name.end())
		{
			cout << _mis_name[s] << '\n';
		}
	}
	
	return 0;
}