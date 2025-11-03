#pragma once
#include <iosfwd>

namespace BoxItNS
{
    class Box;
    std::ostream& operator<<(std::ostream& out, Box& B);
    void check2();
    int box_it_tutorial();
};
