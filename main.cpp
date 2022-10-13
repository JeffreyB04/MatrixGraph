#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


private:
    int graph[V][V];
public:
    int minKey(int key[],bool mstSet[]);
    void printMST(int parent[]);
    void primMST();