#include <iostream>
#include "Graph.h"

using namespace std;

int main() {
    int CountVersh, CountEdges;
    cout<<"Введите сначала кол-во вершин графа, затем кол-во ребер графа\n";
    cin>>CountVersh>>CountEdges;
    Graph graph(CountVersh, CountEdges);
    vector<Edge> ostov = graph.Ostov();
    return 0;
}

/*
7 12

1 2 20
2 3 15
3 4 3
4 5 17
5 6 28
6 1 23
7 1 1
7 2 4
7 3 9
7 4 16
7 5 25
7 6 36
*/