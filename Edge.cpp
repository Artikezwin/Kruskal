#include "Edge.h"
#include "Versh.h"


Edge::Edge(Versh &start, Versh &end, int weight) : start(start), end(end) {
    this->start = start;
    this->end = end;
    this->weight = weight;
}

Versh Edge::getStart() const {
    return start;
}

Versh Edge::getAnEnd() const {
    return end;
}

int Edge::getWeight() const {
    return weight;
}




