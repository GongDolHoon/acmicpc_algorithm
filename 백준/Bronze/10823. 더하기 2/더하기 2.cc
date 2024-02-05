#include <bits/stdc++.h>
using namespace std;

// S의 길이는 최대 10,000이다. 포함되어 있는 정수는 1,000,000보다 작거나 같은 자연수이다. 
string _s;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	string tmp; 
	// I-1. 문자열 S가 여러 줄에 걸쳐서 주어진다.
	while(cin >> tmp)
	{
		_s += tmp;
	}
	
	long long pos = 0;
	
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