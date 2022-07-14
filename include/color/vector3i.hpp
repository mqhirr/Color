/**
 * @file vector3i.hpp
 * @author mqhirr
 * @brief 3d integer type vector for RGB values.
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __VECTOR3I_HPP__
#define __VECTOR3I_HPP__
namespace math
{
    struct vector3i
    {
        vector3i(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {}
        vector3i() : m_x(0), m_y(0), m_z(0) {}

        int m_x;
        int m_y;
        int m_z;
    };
}
#endif // __VECTOR3I_HPP__