#include <bits/stdc++.h>
using namespace std;

// S의 길이는 최대 100이다. 
string _s; 

int _ret = 1; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 문자열 S가 주어진다.
	// S의 최대 길이는 100이다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] == ',')
		{
			_ret++;
		}
	}
	
	// O-1. 문자열 S에 포함되어 있는 정수의 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}