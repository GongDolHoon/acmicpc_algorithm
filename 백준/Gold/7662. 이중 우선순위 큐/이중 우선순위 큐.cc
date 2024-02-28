#include <bits/stdc++.h>
using namespace std;

int _t;
int _k;
string _a;
int _b;

map<int, int> _mii_container;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 T개의 테스트 데이터로 구성된다.
	cin >> _t; 
	
	for(int i = 0; i < _t; ++i)
	{
		_mii_container.clear();
		// I-2. 각 테스트 데이터의 첫째 줄에는 Q에 적용할 연산의 개수를 나타내는 정수 k가
		// 주어진다. 
		cin >> _k; 
		for(int j = 0; j < _k; ++j)
		{
			// I-3. 이어지는 k줄에는 각각 연산을 나타내는 문자와
			// 정수 n이 주어진다.
			// 1 = Q에서 최댓값을 삭제하는 연산
			// -1 = Q에서 최솟값을 삭제하는 연산
			// Q가 비어있는데, 적용할 연산이 'D'라면 무시해도 좋다. 
			cin >> _a >> _b;
			
			if(_a == "I")
			{
				if(_mii_container.find(_b) != _mii_container.end())
				{
					_mii_container[_b]++;
				}
				else
				{
					_mii_container[_b] = 1;
				}
			}
			else
			{
				if(_b == 1)
				{
					if(_mii_container.empty() == false)
					{
						auto iter = _mii_container.end();
						iter--;
						iter->second--;
						if(iter->second == 0)
						{
							_mii_container.erase(iter);
						}
					}
				}
				else
				{
					if(_mii_container.empty() == false)
					{
						auto iter = _mii_container.begin();
						iter->second--;
						if(iter->second == 0)
						{
							_mii_container.erase(iter);
						}
					}
				}
			}
		}
		
		// O-1. 각 테스트 데이터에 대해, 모든 연산을 처리한 후
		// Q에 남아 있는 값 중 최댓값과 최솟값을 출력하라.
		// 두 값은 한 줄에 출력하되 하나의 공백으로 구분하라.
		// 만약 Q가 비어있다면 'EMPTY'를 출력하라. 
		if(_mii_container.empty() == true)
		{
			cout << "EMPTY\n";
		}
		else
		{
			auto ret_min = _mii_container.begin();
			auto ret_max = _mii_container.end();
			ret_max--;
			cout << ret_max->first << ' ';
			cout << ret_min->first << '\n'; 
		}
	}
	
	return 0;
}