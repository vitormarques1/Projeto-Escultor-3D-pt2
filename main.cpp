#include <iostream>
#include <fstream>
#include <string>
#include "Voxel.h"
#include "scultor.h"
#include "leitor.h"
#include <vector>
#include "putvoxel.h"
#include "putbox.h"
#include "putsphere.h"
#include "putellipsoid.h"
#include "cutvoxel.h"
#include "cutbox.h"
#include "cutsphere.h"
#include "cutellipsoid.h"
#include "figurageometrica.h"
using namespace std;

int main()
{
    Scultor *sx;
    leitor anl;
    vector<FiguraGeometrica*> fig;

    fig = anl.anl("projeto2/sonic2.txt"); 

    sx = new Scultor(anl.getdimx(),anl.getdimy(),anl.getdimz());  

    for (size_t x=0; x<fig.size(); x++){
        fig[x] -> draw(*sx);
    }

    sx->writeOFF((char*)"sonicfinal.off");

    for (size_t x=0; x<fig.size(); x++){
        delete fig[x];
    }
    
    fig = anl.anl("projeto2/teste.txt"); 

    sx = new Scultor(anl.getdimx(),anl.getdimy(),anl.getdimz());  

    for (size_t x=0; x<fig.size(); x++){
        fig[x] -> draw(*sx);
    }

    sx->writeOFF((char*)"testeelipse.off");

    for (size_t x=0; x<fig.size(); x++){
        delete fig[x];
    }
    delete sx;
}