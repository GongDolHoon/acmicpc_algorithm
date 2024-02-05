#include <bits/stdc++.h>
using namespace std;

int _n;

// 문장의 길이는 100글자 이내이다. 단어의 개수는 3개 이상이다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 문장의 수 N이 주어진다.
	cin >> _n;
	cin.ignore();
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄부터 N개의 줄에는 각 문장이 주어진다.
		getline(cin, _s);
		string des;
		
		for(int j = 0; j < 2; ++j)
		{
			int pos = _s.find(' ');
			des += _s.substr(0, pos);
			des += ' ';
			_s.erase(0, pos + 1);	
		}
		
		// O-1. 각 문장을 요다의 말로 바꾼 뒤 출력한다. 		
		cout << _s << ' ' << des << '\n';
	}

	
	return 0;
}