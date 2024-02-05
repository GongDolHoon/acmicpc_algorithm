#include <bits/stdc++.h>
using namespace std;

int _n;
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 여러 줄의 테스트케이스들로 이루어진다.
	// I-2. 첫째 줄에 테스트케이스의 수 n이 주어진다.
	cin >> _n;
	cin.ignore();
	
	for(int i = 0; i < _n; ++i)
	{
		// O-1. 각 테스트 케이스마다 한 줄에 하나씩 다음 중 하나를 출력한다.  
		// O-1-1. 팬그램이 아닐 경우: Not a pangram
		// O-1-2. 팬그램일 경우: Pangram!
		// O-1-3. 더블 팬그램일 경우: Double pangram!!
		// O-1-4. 트리플 팬그램일 경우: Triple pangram!!	
		vector<int> vi(26, 0);
		
		getline(cin, _s);
		
		for(int i = 0; i < _s.size(); ++i)
		{
			if(_s[i] >= 'a' && _s[i] <= 'z')
			{
				vi[_s[i] - 'a']++;
			}
			else if(_s[i] >= 'A' && _s[i] <= 'Z')
			{
				vi[_s[i] - 'A']++;
			}
		}
		
		int min = *min_element(vi.begin(), vi.end());
		
		cout << "Case " << i + 1 << ": ";
		if(min >= 3)
		{
			cout << "Triple pangram!!!\n";
		}
		else if(min == 2)
		{
			cout << "Double pangram!!\n";
		}
		else if(min == 1)
		{
			cout << "Pangram!\n";
		}
		else
		{
			cout << "Not a pangram\n";
		}
	}
	
	return 0;
}