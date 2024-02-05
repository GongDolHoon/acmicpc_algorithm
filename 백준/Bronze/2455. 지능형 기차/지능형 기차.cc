#include <bits/stdc++.h>
using namespace std;

int _in;
int _out;
vector<int> _vi(4, 0);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int total = 0;
	// I-1. 각 역에서 내린 사람 수와 탄 사람의 수가 빈칸을 사이에 두고 
	// 첫째 줄부터 넷째 줄까지 역 순서대로 한 줄에 하나씩 주어진다.
	for(int i = 0; i < 4; ++i)
	{
		cin >> _out >> _in;
		
		total = total - _out + _in;
		_vi[i] = total;
	}
	
	// O-1. 첫째 줄에 최대 사람 수를 출력한다. 
	cout << *max_element(_vi.begin(), _vi.end()) << '\n';
	
	return 0;
}