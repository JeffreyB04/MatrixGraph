//
// Created by ESCINF on 13/10/2022.
//

#ifndef MATRIXGRAPH_GRAPH_H
#define MATRIXGRAPH_GRAPH_H
#define INF 0x3f3f3f3f
#define V 5
#include <iostream>

using namespace std;
class Graph {
private:
    int graph[V][V];
public:
    Graph(int graph[V][V]);
    int minKey(int key[],bool mstSet[]);
    void printMST(int parent[]);
    void primMST();
};


#endif //MATRIXGRAPH_GRAPH_H
