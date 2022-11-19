#include "Graph.h"
#include "Edge.h"
#include "Versh.h"
#include <iostream>

using namespace std;

Graph::Graph(int CountVersh, int CountEdges) {
    int start, end, weight;
    Edge *edge;

    for(int i=1; i<=CountVersh; i++){
        v.push_back(*new Versh(i));
    }

    cout<<"Введите сначала 2 вершины, которые соеденяет ребро, а затем вес ребра\n";
    for(int i=1;i<=CountEdges;i++){
        cin>>start>>end>>weight;
        edge = new Edge(v[start - 1], v[end - 1], weight);
        vec.push_back(*edge);
    }

    Qsort(0, vec.size() - 1);
    output();
}

void Graph::output() {
    for(int i=0;i<vec.size();i++){
        cout<<vec[i].getStart().getNumber()<<" "<<vec[i].getAnEnd().getNumber()<<" "<<vec[i].getWeight()<<"\n";
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

vector<Edge> Graph::Ostov() {
    vector<Edge> vrem;
    for(int i=0;i<vec.size();i++){    //Первое действие, создание множеств соедененных вершин
        if(v[vec[i].getStart().getNumber() - 1].getKolConnections() == 0 || v[vec[i].getAnEnd().getNumber() - 1].getKolConnections() == 0){
            vrem.push_back(vec[i]);
            cout<<"!\n";
            v[vec[i].getStart().getNumber() - 1].setKolConnections(vec[i].getStart().getKolConnections() + 1);
            v[vec[i].getAnEnd().getNumber() - 1].setKolConnections(vec[i].getAnEnd().getKolConnections() + 1);
        }
    }

    /*for(int i=0;i<vec.size();i++){
        if()
    }*/

    for(int i=0;i<vrem.size();i++){
        cout<<vrem[i].getStart().getNumber()<<" "<<vrem[i].getAnEnd().getNumber()<<" "<<vrem[i].getWeight()<<"\n";
    }


    return vrem;
}

