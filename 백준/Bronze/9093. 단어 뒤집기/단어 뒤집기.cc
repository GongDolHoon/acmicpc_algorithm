#include <bits/stdc++.h>
using namespace std;

int _t; 

// 단어의 길이는 최대 20, 문장의 길이는 최대 1000이다.
// 단어와 단어 사이에는 공백이 하나 있다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트의 개수 T가 주어진다. 
	cin >> _t;
	cin.ignore();
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, 문장이 하나 주어진다.
		getline(cin, _s);
		
		// O-1. 각 테스트 케이스에 대해서, 입력으로 주어진 문장의 단어를 모두 뒤집어 출력한다. 	
		int pos = 0;
		while((pos = _s.find(' ')) != string::npos)
		{
			string word = _s.substr(0, pos);
			reverse(word.begin(), word.end());
			cout << word << ' ';
			_s.erase(0, pos + 1);
		}
		reverse(_s.begin(), _s.end());
		cout << _s << '\n';
	}
	
	return 0;
}