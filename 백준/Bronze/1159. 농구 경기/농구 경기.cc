#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 150
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 선수의 수 N이 주어진다.
	cin >> _n;
	string s;
	vector<int> vi(26, 0);
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 N개의 줄에는 각 선수의 성이 주어진다.
		cin >> s;
		
		vi[s[0] - 'a']++;
	}
	// O-1. 상근이가 선수 다섯 명을 선발할 수 없을 경우에는 "PREDAJA" (따옴표 없이)를 출력한다. 
	if(*max_element(vi.begin(), vi.end()) < 5)
	{
		cout << "PREDAJA";
	}
	// O-2. 선발할 수 있는 경우에는 가능한 성의 첫 글자를 사전순으로 공백없이 모두 출력한다. 	
	else
	{
		for(int i = 0; i < 26; ++i)
		{
			if(vi[i] >= 5)
			{
				cout << (char)(i + 'a');
			}
		}
	}
	cout << '\n';
	
	return 0;
}