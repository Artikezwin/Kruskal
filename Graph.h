#ifndef PR5_GRAPH_H
#define PR5_GRAPH_H

#include <vector>
#include "Edge.h"
using namespace std;

class Graph {
    vector <Edge> vec;
    vector<Versh> v;
    void Qsort(int start, int end);
public:
    Graph(int CountVersh, int CountEdges);
    void output();
    vector<Edge> Ostov();
};

#endif //PR5_GRAPH_H
