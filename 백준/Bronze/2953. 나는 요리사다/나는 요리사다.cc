#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(5, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int tmp;
	// I-1. 총 다섯 개 줄에 각 참가자가 얻은 네 개의 평가 점수가 공백으로 구분되어 주어진다.
	for(int i = 0; i < 5; ++i)
	{
		for(int j = 0; j < 4; ++j)
		{
			cin >> tmp;
			_vi[i] += tmp;
		}
	}
	
	// O-1. 첫째 줄에 우승자의 번호와 그가 얻은 점수를 출력한다. 
	cout << max_element(_vi.begin(), _vi.end()) - _vi.begin() + 1 <<
		 ' ' << *max_element(_vi.begin(), _vi.end()) << '\n';
	
	return 0;
}