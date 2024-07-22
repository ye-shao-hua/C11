#pragma once
#include <string>
#include <vector>
#include "./../point/point.h"
class Cell{
    public:
        Cell()=default;
        Cell(const Cell &ce);
        std::string &name();
        int &number();
        void operator=(Cell that);
        void operator+=(Point po);
        Point &operator[](int index);
        void show();
    private:
        std::string _name;
        int _number;
        std::vector<Point> _data;
};
