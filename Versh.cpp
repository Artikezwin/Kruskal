#include "Versh.h"

int Versh::getNumber() const {
    return number;
}

int Versh::getKolConnections() const {
    return kol_connections;
}

void Versh::setKolConnections(int kolConnections) {
    kol_connections = kolConnections;
}

Versh::Versh(int number){
    this->number = number;
}
