#include <iostream>
#include "../include/color/color.hpp"

auto main() -> int
{
    std::cout << color::rgb(math::vector3i(255, 255, 255)) << "TEST #2" << color::rgb() << '\n';
    int inp_r, inp_g, inp_b;

    std::cout << "Enter red: ";
    std::cin >> inp_r;
    std::cout << color::rgb(math::vector3i(inp_r, 0, 0)) << "Enter green: ";
    std::cin >> inp_g;
    std::cout << color::rgb(math::vector3i(inp_r, inp_g, 0)) << "Enter blue: ";
    std::cin >> inp_b;

    std::cout << color::rgb(math::vector3i(inp_r, inp_g, inp_b)) << "TEST #2.1" << color::rgb() << '\n';
    return 0;
}