#include <bits/stdc++.h>
using namespace std;

int _t;
// 2 <= len(_s) <= 50
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 T개의 테스트 데이터로 주어진다.
	// I-1-1. 입력의 첫 번째 줄에는 입력ㄷ ㅔ이터의 수를 나타내는 정수 T가 주어진다.
	cin >> _t;
	// I-1-2. 각 테스트 데이터의 첫째 줄에는 괄호 문자열이 한 줄에 주어진다.
	for(int i = 0; i < _t; ++i)
	{
		cin >> _s;
		stack<char> sc;
		
		for(int j = 0; j < _s.size(); ++j)
		{
			if(sc.size() == 0)
			{
				sc.push(_s[j]);
			}
			else
			{
				if(_s[j] == '(')
				{
					sc.push(_s[j]);
				}
				else
				{
					if(sc.top() == '(')
					{
						sc.pop();
					}
				}
			}
		}
	// O-1. 만일 입력 괄호 문자열이 올바른 괄호 문자열(VPS)이면 "YES", 아니면 "NO"를 한 줄에 하나씩 차례대로 출력해야 
		if(sc.empty() == true)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	
	return 0;
}