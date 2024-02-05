#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 50
int _n;

// 알파벳의 대소문자, 공백, 숫자, 그리고 문장부호들이 포함될 수 있다.
// 각 문장은 최소 한개의 문자를 포함하며 100개를 넘지 않는다. 
string _s; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 번째 줄은 1 <= N <= 50의 N이 주어진다.
	cin >> _n;
	cin.ignore();
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 N개의 줄은 각각 한 문장이 주어진다. 
		getline(cin, _s);
		
		vector<int> vi(26, 1);
		
		for(int j = 0; j < _s.size(); ++j)
		{
			if(_s[j] >= 'A' && _s[j] <= 'Z')
			{
				vi[_s[j] - 'A']--;
			}
			else if(_s[j] >= 'a' && _s[j] <= 'z')
			{
				vi[_s[j] - 'a']--;
			}
		}
		
		// O-1. 각 입력에 대해, 팬그램에 해당하면 "pangram"을 출력한다.
		// O-2. 만약 팬그램이 아닐 경우, "missing"을 출력한 후 한 칸 띄고 문장에 나타나지 않은 문자들을 모두 출력한다.
		// 이때, 나타나지 않은 문자들은 모두 소문자로 출력하며 알파벳 순서대로 정렬되어야 한다. 	
		if(*max_element(vi.begin(), vi.end()) == 1)
		{
			cout << "missing ";
			for(int j = 0; j < 26; ++j)
			{
				if(vi[j] == 1)
				{
					cout << (char)(j + 97);
				}
			}
			cout << '\n';
		}
		else
		{
			cout << "pangram\n";
		}
	}
	
	return 0;
}