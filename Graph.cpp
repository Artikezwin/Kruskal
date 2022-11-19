#include "Graph.h"
#include "Edge.h"
#include <iostream>
#include <algorithm>

using namespace std;

Graph::Graph(int CountVersh, int CountEdges) {
    int start, end, weight;
    Edge *edge;
    cout<<"Введите сначала 2 вершины, которые соеденяет ребро, а затем вес ребра\n";
    for(int i=1;i<=CountEdges;i++){
        cin>>start>>end>>weight;
        edge = new Edge(start, end, weight);
        vec.push_back(*edge);
    }
    Qsort(0, vec.size() - 1);
    output();
}

void Graph::output() {
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].getStart()<<" "<<vec[i].getAnEnd()<<" "<<vec[i].getWeight()<<"\n";
    }
}

void Graph::Qsort(int start, int end) {
    int l = start, r = end;
    int piv = vec[(l + r) / 2].getWeight(); // Опорным элементом для примера возьмём средний
    while (l <= r) {
        while (vec[l].getWeight() < piv)
            l++;
        while (vec[r].getWeight() > piv)
            r--;
        if (l <= r)
            swap(vec[l++], vec[r--]);
    }
    if (start < r)
        Qsort(start, r);
    if (end > l)
        Qsort(l, end);
}