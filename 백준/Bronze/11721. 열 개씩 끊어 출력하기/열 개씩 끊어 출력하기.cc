#include <bits/stdc++.h>
using namespace std;

// 단어는 알파벳 소문자와 대문자로만 이루어져 있으며,
// 길이는 100을 넘지 않는다.  
string _s; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어가 주어진다.
	cin >> _s;
	
	// O-1. 입력으로 주어진 단어를 열 개씩 끊어서 한 줄에 하나씩 출력한다. 
	cout << _s[0];
	
	for(int i = 1; i < _s.size(); ++i)
	{
		if(i % 10 == 0)
		{
			cout << '\n';
		}
		
		cout << _s[i];
	}
	cout << '\n';
	
	return 0;
}