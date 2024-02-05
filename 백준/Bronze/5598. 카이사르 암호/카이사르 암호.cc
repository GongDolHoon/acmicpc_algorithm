#include <bits/stdc++.h>
using namespace std;

// 단어는 최대 1000글자 이하다. 
string _s; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 한 줄로 이루어져 있으며, 그 한 줄에는 대문자 알파벳으로 구성된
	// 단어가 1개 있다.
	cin >> _s;
	
	for(int i = 0; i < _s.size(); ++i)
	{
		if(_s[i] >= 'D' && _s[i] <= 'Z')
		{
			_s[i] -= 3; 
		}
		else
		{
			_s[i] += 23;
		}
	}
	
	// O-1. 입력받은 카이사르 단어를 원래 단어로 고친 걸 출력하시면 된다. 
	cout << _s << '\n';
	
	return 0;
}