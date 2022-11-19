#include "Edge.h"

Edge::Edge(int start, int end, int weight){
    this->start = start;
    this->end = end;
    this->weight = weight;
}

int Edge::getStart() const {
    return start;
}

int Edge::getAnEnd() const {
    return end;
}

int Edge::getWeight() const {
    return weight;
}


