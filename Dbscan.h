#pragma once
#include<vector>

const int ponit_visited = 1;
const int ponit_unvisited = 0;

class clusterDbscan
{
public:
	float epsilon;
	int minpoints;
private:

};

class point
{
public:
	vector<float> range;
	point(int num)
	{
		vector<float> rang(num);
	}
};