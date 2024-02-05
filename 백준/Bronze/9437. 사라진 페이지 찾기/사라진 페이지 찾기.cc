#include <bits/stdc++.h>
using namespace std;

// 4 <= N <= 1,000
// 1 <= P <= N
int _n, _p;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	while(true)
	{
		// I-1. 각 테스트 케이스에 대해 두 가지 정수 N, P가 주어진다.
		// I-1-1. 4의 배수인 N은 탐구 영역의 전체 페이지 수이며, 
		// I-1-2. P는 선택된 한 페이지다.
		// 입력의 마지막에는 하나의 0만 주어진다.
		cin >> _n;
		if(_n == 0)
		{
			return 0;
		}
		cin >> _p;
	
		vector<int> vi;
		
		int left = 1;
		int right = _n;
		
		while(left < right)
		{
			vi.push_back(left++);			
			vi.push_back(left++);
			vi.push_back(right-1);
			vi.push_back(right);
			right -= 2;
		}
		
		int loc = 0;
		
		for(int i = 0; i < _n; ++i)
		{
			if(vi[i] == _p)
			{
				loc = i;
				break;
			}
		}
		
		int cycle = loc / 4;
		
		// O-1. 각 테스트 케이스에 대해 사라진 페이지들을 오름차순으로 출력한다.	
		for(int i = cycle * 4; i < cycle * 4 + 4; ++i)
		{
			if(i == loc)
			{
				continue;
			}
			
			cout << vi[i] << ' ';
		}
		cout << '\n';
	}
	 
	return 0;
}