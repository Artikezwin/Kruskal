#ifndef PR5_EDGE_H
#define PR5_EDGE_H

class Edge {
    int start;  //откуда соеденяет
    int end;    //куда соеденяет
    int weight; //вес ребра
public:
    Edge(int start, int end, int weight);

    int getStart() const;

    int getAnEnd() const;

    int getWeight() const;
};

#endif //PR5_EDGE_H
