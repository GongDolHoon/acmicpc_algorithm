#include <bits/stdc++.h>
using namespace std;

// 2 <= N <= 50
// 1 <= M <= 13
int _n, _m;
int _ret;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 M이 주어진다.
	cin >> _n >> _m; 
	vector<vector<int>> vvi_map(_n, vector<int>(_n));
	vector<pair<int, int>> vii_chicken;
	vector<pair<int, int>> vii_house;
	// I-2. 둘째 줄부터 N개의 줄에는 도시의 정보가 주어진다.
	// 0 = 빈 칸
	// 1 = 집
	// 2 = 치킨 집 
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _n; ++j)
		{
			cin >> vvi_map[i][j];
			if(vvi_map[i][j] == 1)
			{
				vii_house.push_back({i, j});
			}
			else if(vvi_map[i][j] == 2)
			{
				vii_chicken.push_back({i, j});
			}
		}	
	} 
	
	vector<bool> vb_combi(vii_chicken.size(), false);
	for(int i = 0; i < _m; ++i)
	{
		vb_combi[i] = true;
	}
	
	vector<vector<pair<int, int>>> vvii_chicken;
	int j = 0;
	do
	{
		vvii_chicken.push_back(vector<pair<int,int>>(0));
		for(int i = 0; i < vb_combi.size(); ++i)
		{
			if(vb_combi[i] == true)
			{
				vvii_chicken[j].push_back(vii_chicken[i]);
			}
		}
		j++;
	} while(prev_permutation(vb_combi.begin(), vb_combi.end()));
	
	int city_chicken_distance;
	int temp_chicken_distance;
	int chicken_distance;
	_ret = INT_MAX;
	for(int i = 0; i < vvii_chicken.size(); ++i)
	{
		city_chicken_distance = 0;	
		for(int j = 0; j < vii_house.size(); ++j)
		{
			chicken_distance = INT_MAX;
			for(int k = 0; k < vvii_chicken[i].size(); ++k)
			{
				temp_chicken_distance = abs(vii_house[j].first - vvii_chicken[i][k].first)
					+ abs(vii_house[j].second - vvii_chicken[i][k].second);
				if(temp_chicken_distance == 1)
				{
					chicken_distance = 1;
					break;	
				}	
				chicken_distance = min(temp_chicken_distance, chicken_distance);
			}
			city_chicken_distance += chicken_distance;
		}
		_ret = min(city_chicken_distance, _ret);
	}
	
	// O-1. 첫째 줄에 폐업시키지 않을 치킨집을 최대 M개 골랐을 때,
	// 도시의 치킨 거리의 최솟값을 출력한다.
	cout << _ret << '\n'; 
	
	return 0;
}