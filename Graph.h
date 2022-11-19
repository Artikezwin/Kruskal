#ifndef PR5_GRAPH_H
#define PR5_GRAPH_H

#include <vector>
#include "Edge.h"
using namespace std;

class Graph {
    vector <Edge> vec;
public:
    Graph(int CountVersh, int CountEdges);
    void output();

    void Qsort(int start, int end);
};


#endif //PR5_GRAPH_H
