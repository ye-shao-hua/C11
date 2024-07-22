#include "./../include/cellvec/cellvec.h"
#include "./../include/cell/cell.h"

#include <iostream>
int &CellVec::number(){
    return _number;
}

void CellVec::operator+=(Cell ce){
    _data.push_back(ce);
}

Cell &CellVec::operator[](int index){
    return _data[index];
}

void CellVec::show(){   
    std::cout<<_number<<"\n";
    for(auto i:_data){
        i.show();
        std::cout<<"\n";
    }
}
