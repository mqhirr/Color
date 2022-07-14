#include <iostream>
#include "../include/color/color.hpp"

auto main() -> int
{
    std::cout << color::rgb(math::vector3i(0, 255, 0)) << "TEST #1" << color::rgb() << '\n';
    return 0;
}