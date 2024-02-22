#include <bits/stdc++.h>
using namespace std;

// 1 <= t <= 100
int _t;
// 1 <= len(p) <= 100,000
string _p;
// 0 <= n <= 100,000
int _n;
// 1 <= xi <= 100
string _x;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	cin >> _t; 
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 테스트 케이스의 첫째 줄에는 수행할 함수 p가 주어진다. 
		cin >> _p;
		// I-3. 다음 줄에는 배열에 들어있는 수의 개수 n이 주어진다. 
		cin >> _n;
		// I-4. 다음 줄에는 [x1, ... xn]과 같은 형태로 배열에 들어있는 정수가 주어진다.
		cin >> _x; 
		
		string token = "";
		vector<string> vs_x(_n);
		int cycle = 0;
		
		for(int j = 0; j < _x.length(); ++j)
		{
			if(isdigit(_x[j]))
			{
				token += _x[j];
			}		
			else
			{
				if(!token.empty())
				{
					vs_x[cycle++] = token;
					token = "";
				}
			}
		}		
	
		int left = 0;
		int right = _n;
		bool isReverse = false;
		bool hasError = false;
		
		int len_p = _p.size();
		for(int j = 0; j < len_p; ++j)
		{
			if(_p[j] == 'R')
			{
				int tmp = left;
				left = right;
				right = tmp;
				isReverse = !isReverse;
			}
			else
			{
				if(isReverse == true)
				{
					left--;
					if(right > left)
					{
						hasError = true;
						break;
					}
				}
				else
				{
					left++;
					if(left > right)
					{
						hasError = true;
						break;
					}
				}
			}
		}
		// O-1. 각 테스트 케이스에 대해서, 입력으로 주어진 정수 배열에 함수를 수행한 결과를 출력한다. 
		// 만약, 에러가 발생한 경우에는 error를 출력한다.
		if(hasError == true)
		{
			cout << "error\n";
		}
		else
		{
			cout << "[";
			if(isReverse == true)
			{
				for(int j = left - 1; j >= right; --j)
				{
					cout << vs_x[j];
					if(j == right)
					{
						break;
					}
					cout << ',';
				}
			}
			else
			{
				for(int j = left; j < right; ++j)
				{
					cout << vs_x[j];
					if(j == right - 1)
					{
						break;
					}
					cout << ',';
				}
			}
			cout << "]\n";
		}
	}
	
	return 0;
}