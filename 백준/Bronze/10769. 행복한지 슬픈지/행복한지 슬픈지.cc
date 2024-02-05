#include <bits/stdc++.h>
using namespace std;

string _s;

int _ret_h;
int _ret_s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 줄에 최소 1개에서 최대 255개의 문자들이 입력된다.
	getline(cin, _s);
	
	int pos = 0;
	while((pos = _s.find(":-")) != string::npos)
	{
		if(_s[pos + 2] == ')')
		{
			_ret_h++;
		}
		else if(_s[pos+2] == '(')
		{
			_ret_s++;
		}
		else
		{
			_s.erase(0, pos + 2);
			continue;
		}
		_s.erase(0, pos + 3);
	}
	
	// O-1. 출력은 다음 규칙에 따라 정해진다.
	// O-1-1. 어떤 이모티콘도 포함되어 있지 않으면, none을 출력한다.
	if(_ret_h == 0 && _ret_s == 0)
	{
		cout << "none\n";
	}
	// O-1-2. 행복한 이모티콘과 슬픈 이모티콘의 수가 동일하게 포함되어 있으면,
	// unsure를 출력한다.
	else if(_ret_h == _ret_s)
	{
		cout << "unsure\n";
	}
	// O-1-3. 행복한 이모티콘이 슬픈 이모티콘보다 많이 포함되어 있으면, happy를 출력한다.
	else if(_ret_h > _ret_s)
	{
		cout << "happy\n";
	}
	// O-1-4. 슬픈 이모티콘이 행복한 이모티콘보다 많이 포함되어 있으면, sad를 출력한다. 
	else if(_ret_s > _ret_h)
	{
		cout << "sad\n";
	}
	
	return 0;
}