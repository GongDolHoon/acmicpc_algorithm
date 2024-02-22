#include <bits/stdc++.h>
using namespace std;

// len(s) <= 100
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
		
	while(true)
	{
		stack<char> sc;
		// I-1. 각 문자열은 마지막 글자를 제외하고 영문 알파벳, 공백, 소괄호("()"), 대괄호("[]")로 이루어져 있으며,
		// 온점(".")으로 끝나고, 길이는 100글자보다 작거나 같다.
		getline(cin, _s);
		// I-2. 입력의 종료조건은 맨 마지막에 온점 하나(".")가 들어온다. 
		if(_s == ".")
		{
			return 0;
		}
		
		int len = _s.length();
		
		for(int i = 0; i < len; ++i)
		{
			if(_s[i] == '[')
			{
				sc.push('[');
			}
			else if(_s[i] == '(')
			{
				sc.push('(');
			}
			else if(_s[i] == ']')
			{
				if(sc.empty() == true)
				{
					sc.push('E');
					break;
				}
				else
				{
					if(sc.top() == '[')
					{
						sc.pop();
					}
					else
					{
						sc.push('E');
						break;
					}	
				}
			}
			else if(_s[i] == ')')
			{
				if(sc.empty() == true)
				{
					sc.push('E');
					break;
				}
				else
				{
					if(sc.top() == '(')
					{
						sc.pop();
					}
					else
					{
						sc.push('E');
						break;
					}	
				}
			}
		}
		
		// O-1. 각 줄마다 해당 문자열이 균형을 이루고 있으면 "yes"를, 아니면 "no"를 출력한다.
		if(sc.empty() == true)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}	
	
	return 0;
}