#include <bits/stdc++.h>
using namespace std;

vector<bool> _vb(9, true);
vector<int> _vi(9, 0);

int r = 7;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	for(int i = 0; i < _vb.size() - r; ++i)
	{
		_vb[i] = false;
	}
	// I-1. 총 아홉개 줄에 1보다 크거나 같고 99보다 작거나 같은 자연수가 주어진다. 
	// 모든 숫자는 서로 다르다. 또, 항상 답이 유일한 경우만 입력으로 주어진다.
	for(int i = 0; i < 9; ++i)
	{
		cin >> _vi[i];
	}
	
	do
	{
		int total = 0;
		
		for(int i = 0; i < _vi.size(); ++i)
		{
			if(_vb[i])
			{
				total += _vi[i];			
			}		
		}
		
		// O-1. 일곱 난쟁이가 쓴 모자에 쓰여 있는 수를 한 줄에 하나씩 출력한다.
		if(total == 100)
		{
			for(int i = 0; i < _vi.size(); ++i)
			{
				if(_vb[i])
				{
					cout << _vi[i] << '\n';	
				}	
			}	
			break;
		}
	} while(next_permutation(_vb.begin(), _vb.end()));	
	
	return 0;
}