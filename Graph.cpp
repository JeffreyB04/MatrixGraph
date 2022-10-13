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

void Graph::printMST(int *parent) {
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout << parent[i] << " - " << i << " \t" << graph[i][parent[i]] << "\n";

}

void Graph::primMST() {
    int parent[V];
    int key[V];
    bool mstSet[V];
    for (int i = 0; i < V; i++)
        key[i] = INF, mstSet[i] = false;
    key[0] = 0;
    parent[0] = -1;
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;
        for (int v = 0; v < V; v++)
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }
    printMST(parent);
}


