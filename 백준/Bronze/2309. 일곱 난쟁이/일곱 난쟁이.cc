#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(9, 0);
vector<bool> _vb(9, true);
set<int> _si;

int _r = 7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 아홉 개의 줄에 걸쳐 난쟁이들의 키가 주어진다. 
	// 주어지는 키는 100을 넘지 않는 자연수이며, 
	// 아홉 난쟁이의 키는 모두w 다르며, 
	// 가능한 정답이 여러 가지인 경우에는 아무거나 출력한다.
	for(int i = 0; i < 9; ++i)
	{
		cin >> _vi[i];
	}
	
	for(int i = 0; i < _vi.size() - _r; ++i)
	{
		_vb[i] = false;
	}
	
	// O-1. 일곱 난쟁이의 키를 오름차순으로 출력한다. 일곱 난쟁이를 찾을 수 없는 경우는 없다.
	do {
		int total = 0;
		for(int i = 0; i < _vi.size(); ++i)
		{
			if(_vb[i])
			{
				total += _vi[i];
			}
		}
		
		if(total == 100)
		{
			for(int i = 0; i < _vi.size(); ++i)
			{
				if(_vb[i])
				{
					_si.insert(_vi[i]);
				}	
			}	
			
			break;
		}
	} while(next_permutation(_vb.begin(), _vb.end()));
	
	for(int i: _si)
	{
		cout << i << '\n';
	}
	
	return 0;
}