#include"Dbscan.h"
#include <iostream>
#include<memory>
using namespace std;



int ClusterDbscanRun(int PointNum, clusterDbscan& inst, vector<vector<float>>& array)
{
    float epsilon;
    int point = 0;
    vector<int> visited(PointNum);
    vector<int> neigh;
    for (point; point < PointNum; point++)
    {
        if (visited[point] != ponit_visited)
        {
            visited[point] = ponit_visited;
            clusterfindneighbors();
        }
    }
}

int clusterfindneighbors(float cur_range, float epsilon, int point, int pointnum, vector<int>& visited, vector<float>& range,vector<int>& neigh,int minponitnum)
{
    int i;

    for (i = 0; i < pointnum; i++)
    {
        if (visited[i] == ponit_visited)
        {
            continue;
        }
        if (abs(range[i] - cur_range) < epsilon)
        {
            neigh.push_back(i);

        }
    }
}
