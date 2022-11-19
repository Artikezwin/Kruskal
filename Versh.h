#ifndef PR5_VERSH_H
#define PR5_VERSH_H

class Versh {
    int number;
    int kol_connections = 0;
public:
    int getNumber() const;

    int getKolConnections() const;

    void setKolConnections(int kolConnections);

    Versh(int number);
};

#endif //PR5_VERSH_H
