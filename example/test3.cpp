#include <random>
#include <iostream>
#include "../include/color/color.hpp"

auto main() -> int
{
    std::random_device r_dev, b_dev, g_dev;
    std::mt19937_64 r_gen(r_dev()), b_gen(b_dev()), g_gen(g_dev());
    std::uniform_int_distribution<int> r_dist(0, 255), b_dist(0, 255), g_dist(0, 255);
    
    std::cout << color::rgb(math::vector3i(r_dist(r_gen), g_dist(g_gen), b_dist(b_gen))) << "TEST #3" << color::rgb() << '\n';
}