#include "../include/point/point.h"
#include <iostream>
Point::Point(const Point& that){
    _data=that._data;
}
Point::Point(double a,double b){
    _data[0]=a;
    _data[1]=b;
}
void Point::operator()(double a,double b){
    _data[0]=a;
    _data[1]=b;
}
void Point::operator+=(const Point &po){
    _data[0]+=po._data[0];
    _data[1]+=po._data[1];
}
double &Point::operator[](int index){
    return _data[index];
}
void Point::show(){
    for(auto i:_data)
        std::cout<<i<<" ";
    std::cout<<"\n";
}
