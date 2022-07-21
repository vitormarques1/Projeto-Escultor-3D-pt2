#ifndef SCULTOR_H
#define SCULTOR_H
#include "Voxel.h"
class Scultor
{
protected:
    Voxel ***v;
    int nx,ny,nz;
    float r,g,b,a; 
    float fix;

public:
    Scultor(int nx1, int ny1, int nz1);
    ~Scultor();
    void setColor(float r1, float g1, float b1, float alpha);
    void putVoxel(int x, int y, int z);
    void cutVoxel(int x, int y, int z);
    int getx();
    int gety();
    int getz();
    void writeOFF(char *filename);

};
#endif