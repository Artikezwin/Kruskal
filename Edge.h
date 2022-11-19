#ifndef PR5_EDGE_H
#define PR5_EDGE_H
#include "Versh.h"

class Edge {
    Versh start;    //откуда соеденяет
    Versh end;      //куда соеденяет
    int weight;      //вес ребра

public:
    Edge(Versh &start, Versh &end, int weight);

    Versh getStart() const;

    Versh getAnEnd() const;

    int getWeight() const;
};

#endif //PR5_EDGE_H
