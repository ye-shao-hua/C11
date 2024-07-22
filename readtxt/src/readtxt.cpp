#include "./../include/readtxt/readtxt.h"
#include "./../include/cell/cell.h"
#include "./../include/cellvec/cellvec.h"
#include <iostream>
void ReadTXT::open(std::string filename){
    ifs.open(filename);
    if(!ifs.is_open())
        std::cout<<"file open fail";
}
Cell ReadTXT::read_cell(){
    std::string buffer_str;
    int number;
    Point po;
    Cell ce;
    ifs>>buffer_str;
    ce.name()=buffer_str;
    ifs>>number;
    ce.number()=number;
    for(auto i=0;i<number;++i){
        ifs>>po[0];
        ifs>>po[1];
        ce+=po;
    }
    return ce;
}
void ReadTXT::read_master(){
    _master=read_cell();
}

void ReadTXT::read_metal(){
    int number;
    Cell ce;
    ifs>>number;
    _metal.number()=number;
    for(auto i=0;i<number;++i){
        ce=read_cell();
        _metal+=ce;
    }
}

void ReadTXT::show(){
    _master.show(); 
    std::cout<<"\n";
    _metal.show();
}

void ReadTXT::master_left(){
    std::cout<<_master[0][0]-_metal[2][1][0]<<" ";
}
void ReadTXT::master_right(){
    std::cout<<_metal[3][0][0]-_master[1][0]<<" ";
}

void ReadTXT::master_width(){
    std::cout<<_master[1][0]-_master[0][0]<<" ";
}

void ReadTXT::metal_distance(int index_left,int index_right){
    std::cout<<_metal[index_right][0][0]-_metal[index_left][1][0]-
        (_master[0][0]-_metal[2][1][0])
        <<" ";
}
