#pragma once
#include <fstream>
#include <string>
#include "./../cell/cell.h"
#include "./../cellvec/cellvec.h"
class ReadTXT{
    public:
    void open(std::string filename);
    Cell read_cell();
    void read_master();
    void read_metal();
    void show();
    void master_left();
    void master_right();
    void master_width();
    void metal_distance(int index_left,int index_right);
    //void 
    private:
    std::ifstream ifs;
    Cell _master;
    CellVec _metal;
};

