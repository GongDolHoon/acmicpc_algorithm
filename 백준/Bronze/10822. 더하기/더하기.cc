#include <bits/stdc++.h>
using namespace std;

// S의 길이는 최대 100이다. 
string _s;
long long _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 문자열 S가 주어진다. 
	cin >> _s;
	
	int pos = 0;
	
	while((pos = _s.find(',')) != string::npos)
	{
		_ret += stoi(_s.substr(0, pos));
		_s.erase(0, pos + 1);
	}
	_ret += stoi(_s);
	
	// O-1. 문자열 S에 포함되어 있는 자연수의 합을 출력한다. 
	cout << _ret << '\n';	
	
	return 0;
}