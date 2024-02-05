#include <bits/stdc++.h>
using namespace std;

vector<int> _vi(10, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int average = 0;
	vector<int> vi(101, 0);
	// I-1. 첫째 줄부터 열 번째 줄까지 한 줄에 하나씩 자연수가 주어진다.
	for(int i = 0; i < 10; ++i)
	{
		cin >> _vi[i];
		vi[_vi[i] / 10]++;
		average += _vi[i];
	}
	
	average /= 10;
	int max = *max_element(vi.begin(), vi.end());
	
	// O-1. 첫째 줄에는 평균을 출력하고
	cout << average << '\n';
	
	// O-2. 둘째 줄에는 최빈값을 출력한다. 
	for(int i = 0; i < 101; ++i)
	{
		if(vi[i] == max)
		{
			cout << i * 10 << '\n';
			break;
		}
	}
	
	return 0;
}