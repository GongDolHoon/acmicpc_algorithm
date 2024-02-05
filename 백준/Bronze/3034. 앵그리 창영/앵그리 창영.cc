#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 50
int _n;
// 1 <= W, H <= 100
int _w, _h;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 던진 성냥의 개수 N과 박스의 가로 크기 W와 세로 크기 H가 주어진다.
	cin >> _n >> _w >> _h;
	
	double hypotenuse = sqrt(pow(_w, 2) + pow(_h, 2));
	
	int num;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 다음 N개의 줄에는 성냥의 길이가 주어진다.
		cin >> num;
			
		// O-1. 입력으로 주어지는 각각의 성냥에 대해서, 박스안에 들어갈 수 있으면 "DA" 없으면 "NE"를 출력한다. 	
		if(num <= hypotenuse)
		{
			cout << "DA\n";
		}
		else
		{
			cout << "NE\n";
		}
	}
	
	return 0;
}