#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 여러 테스트 케이스로 이루어져 있다.
	// I-2. 입력의 마지막 줄에는 별표(*)가 하나 주어진다.
	string s;
	
	while(true)
	{
		getline(cin, s);
		
		vector<int> vi(26, 1);
		if(s == "*")
		{
			break;	
		}	
		
		for(int i = 0; i < s.size(); ++i)
		{
			if(s[i] == ' ')
			{
				continue;
			}
			
			vi[s[i] - 'a']--;
		}
	
		// O-1. 각 테스트 케이스에 대해서 입력으로 주어진 문장이 팬그램이라면 'Y', 아니라면 'N'을 출력한다. 	
		if(*max_element(vi.begin(), vi.end()) == 1)
		{
			cout << "N\n";
		}
		else
		{
			cout << "Y\n";
		}
	}
	
	return 0;
}