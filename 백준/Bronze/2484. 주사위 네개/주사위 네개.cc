#include <bits/stdc++.h>
using namespace std;

int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 참여하는 사람 수 N이 주어지고,
	cin >> _n;
	
	vector<int> vi_score(_n, 0);
	int num;
	
	for(int i = 0; i < _n; ++i)
	{
		vector<int> vi(7, 0);
		// I-2. 그 다음 줄부터 N개의 줄에 사람들이 주사위를 던진 4개의 눈이 빈칸을 사이에 두고
		// 주어진다.	
		for(int j = 0; j < 4; ++j)
		{
			cin >> num;
			vi[num]++;
		}
		
		if(*max_element(vi.begin(), vi.end()) == 1)
		{
			for(int j = 6; j > 0; --j)
			{
				if(vi[j] == 1)
				{
					vi_score[i] = j * 100;
					break;
				}
			}
		}
		else if(*max_element(vi.begin(), vi.end()) == 2)
		{
			bool trig = false;
			
			for(int j = 1; j < 7; ++j)
			{
				if(vi[j] == 1)
				{
					trig = true;
					break;
				}
			}
			
			if(trig == true)
			{
				vi_score[i] = 1000 + (max_element(vi.begin(), vi.end()) - vi.begin()) * 100;
			}
			else
			{
				int a = 0;
				int b = 0;
				bool trigg = false;
				
				for(int j = 1; j < 7; ++j)
				{
					if(vi[j] == 2)
					{
						if(trigg == true)
						{
							b = j;
						}
						else
						{
							trigg = true;
							a = j;
						}
					}
				}
				
				vi_score[i] = 2000 + a * 500 + b * 500;
			}
		}
		else if(*max_element(vi.begin(), vi.end()) == 3)
		{
			vi_score[i] = 10000 + (max_element(vi.begin(), vi.end()) - vi.begin()) * 1000;
		}
		else if(*max_element(vi.begin(), vi.end()) == 4)
		{
			vi_score[i] = 50000 + (max_element(vi.begin(), vi.end()) - vi.begin()) * 5000;
		}
	}
	
	// O-1. 첫째 줄에 가장 많은 상금을 받은 사람의 상금을 출력한다. 
	cout << *max_element(vi_score.begin(), vi_score.end()) << '\n';
	
	return 0;
}