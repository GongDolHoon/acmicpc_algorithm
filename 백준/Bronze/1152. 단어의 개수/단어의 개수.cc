#include <bits/stdc++.h>
using namespace std;

// 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 공백 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다.
// 또한 문자열은 공백으로 시작하거나 끝날 수 있다. 
string _s; 
int _ret = 1;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
	getline(cin, _s); 
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] == ' ')
		{
			_ret++;	
		}	
	}	
	
	if(_s[0] == ' ')
	{
		_ret--;
	}
	
	if(_s[_s.size() - 1] == ' ')
	{
		_ret--;
	}
	
	// O-1. 첫째 줄에 단어의 개수를 출력한다. 
	cout << _ret << '\n';
		
	return 0;
}