#include <bits/stdc++.h>
using namespace std;

// 2 <= N <= 50
int _n;

// 10 <= x, y <= 200
int _x, _y;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 줄에는 전체 사람의 수 N이 주어진다.
	cin >> _n;
	
	vector<pair<int, int>> vpii(_n);
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 그리고 이어지는 N개의 줄에는 각 사람의 몸무게와 키를 나타내는
		// 양의 정수 x와 y가 하나의 공백을 두고 각각 나타난다.	
		cin >> _x >> _y;
		
		vpii[i] = {_x, _y};
	}
	
	vector<int> vi(_n);
	
	for(int i = 0; i < _n; ++i)
	{
		int cnt = 1;
		
		for(int j = 0; j < _n; ++j)
		{
			if(vpii[i].first < vpii[j].first && vpii[i].second < vpii[j].second)
			{
				cnt++;
			}
		}
		
		vi[i] = cnt;
	}
	
	// O-1. 여러분은 입력에 나열된 사람의 덩치 등수를 구해서 그 순서대로 첫 줄에 출력해야 한다.
	for(int i = 0; i < _n; ++i)
	{
		cout << vi[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}