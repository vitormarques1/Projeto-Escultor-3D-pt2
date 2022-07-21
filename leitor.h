#ifndef leitor_H
#define leitor_H
#include <vector>
#include "figurageometrica.h"
#include <string>
using namespace std;

class leitor
{
    int dimx,dimy,dimz;
    float r,g,b,a;
public:
    leitor();
    ~leitor(){};
    // container de ponteiros para figuraGeometrica, aqui será feita a leitura do arquivo
    vector<FiguraGeometrica*> anl(string filename);
    // retorna os valores das dimensões
    int getdimx();
    int getdimy();
    int getdimz();
};

#endif // leitor_H