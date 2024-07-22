#include "./../include/cell/cell.h"
#include <iostream>

Cell::Cell(const Cell &ce){
    _name=ce._name;
    _number=ce._number;
    for(auto i:ce._data)
        _data.push_back(i);
}
std::string &Cell::name(){
    return _name;
}

int &Cell::number(){
    return _number;
}

void Cell::show(){
    std::cout<<_name<<"\n";
    std::cout<<_number<<"\n";
    for(auto i:_data)
        i.show();
}
void Cell::operator=(Cell that){
        _name=that._name;
        _number=that._number;
        _data=that._data;
}
void Cell::operator+=(Point po){
    _data.push_back(po);
}

Point &Cell::operator[](int index){
    return _data[index];
}
