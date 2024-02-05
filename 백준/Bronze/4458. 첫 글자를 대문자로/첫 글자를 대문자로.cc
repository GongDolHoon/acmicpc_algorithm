#include <bits/stdc++.h>
using namespace std;

int _n;
// 각 문장에 들어있는 글자의 수는 30을 넘지 않는다.  
string _s; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 줄의 수 N이 주어진다.
	cin >> _n;
	cin.ignore();
	// I-2. 다음 N개의 줄에는 문장이 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		getline(cin, _s);
		
		if(_s[0] >= 'a' && _s[0] <= 'z')
		{
			_s[0] -= 32;
		}
		
		// O-1. 각 줄의 첫글자를 대문자로 바꾼뒤 출력한다. 	
		cout << _s << '\n';
	}
	
	return 0;
}