#pragma once
#include <array>
class Point{
    public:
    Point()=default;
    Point(double a,double b);
    Point(const Point &that);
    void operator()(double a,double b);
    void operator+=(const Point &po);
    double &operator[](int index);
    void show();

    


    private:
    std::array<double,2> _data;
};
