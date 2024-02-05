#include <bits/stdc++.h>
using namespace std;

string _s;
string _ret_s; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 한 줄로 이루어져 있고, 최대 100글자로만 이루어져 있다.
	// 첫 번째 글자는 항상 대문자이다.
	// 하이픈 뒤에는 반드시 대문자이다.
	// 그 외의 모든 문자는 모두 소문자이다.
	cin >> _s;
	
	_ret_s.push_back(_s[0]);
	
	for(int i = 1; i < _s.size(); ++i)
	{
		if(_s[i] == '-')
		{
			_ret_s.push_back(_s[i+1]);	
		}	
	}
	
	// 첫 줄에 짧은 형태의 이름을 출력한다. 
	cout << _ret_s << '\n';
	
	return 0;
}