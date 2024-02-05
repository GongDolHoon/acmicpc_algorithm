#include <bits/stdc++.h>
using namespace std;

int _n;
// 컴퓨터의 이름은 최대 50글자이며, 알파벳 대문자로만 이루어져 있다. 
string _s;
string _ret_s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 컴퓨터의 개수 n이 주어진다.
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 줄부터 n개의 줄에는 컴퓨터의 이름이 주어진다.
		cin >> _s;
		_ret_s.clear();
		
		for(int i = 0; i < _s.size(); ++i)
		{
			if(_s[i] == 'Z')
			{
				_ret_s.push_back('A');	
				continue;
			}	
			
			_ret_s.push_back(_s[i] + 1);
		}	
		
		// O-1. 입력으로 주어진 컴퓨터 이름에 대해서, 한 줄에 하나씩 각 글자를 알파벳 다음 순서로
		// 써서 출력한다. 	
		cout << "String #" << i + 1 << '\n';
		cout << _ret_s << '\n';
		cout << '\n';
	} 
	
	return 0;
}