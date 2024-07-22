#pragma once
#include <vector>
#include "./../cell/cell.h"
class CellVec{
    public:
        CellVec()=default;
        int &number();
        void operator+=(Cell ce);
        Cell &operator[](int index);
        void show();
    private:
        int _number;
        std::vector<Cell> _data{};
};
