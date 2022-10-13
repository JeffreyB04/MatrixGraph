//
// Created by ESCINF on 13/10/2022.
//

#include "Graph.h"

Graph::Graph(int graoh[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++)
            this->graph[i][j] = graph[i][j];
    }
}

int Graph::minKey(int *key, bool *mstSet) {
    int min = INF, min_index;
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}
