#include <iostream>
#include <point/point.h>
#include <cell/cell.h>
#include <readtxt/readtxt.h>
int main(int argc,char **argv){
    ReadTXT a;
    a.open(argv[1]);
    a.read_master();
    a.read_metal();

    a.master_width();
    a.master_left();
    a.master_right();
    a.metal_distance(5,6);
    //a.show();
    return 0;
}
