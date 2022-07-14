/**
 * @file color.hpp
 * @author mqhirr
 * @brief a color library that uses \x1B escape sequences to set the color of the output.
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __COLOR_HPP__
#define __COLOR_HPP__

#ifdef _WIN32
#define COMPILER_VER _MSVC_LANG 
#else
#define COMPILER_VER __cplusplus
#endif

#include <string>
#include <sstream>
#if COMPILER_VER >= 202002L
#include <format>
#endif
#include "vector3i.hpp"


namespace color
{
    std::string rgb(const math::vector3i& vec = math::vector3i(255, 255, 255))
    {
#ifdef _WIN32
        system("");
#endif // _WIN32

#if COMPILER_VER >= 202002L
        return std::format("\x1B[38;2;{};{};{}m", vec.m_x, vec.m_y, vec.m_z);
#else
        std::stringstream fmt;
        fmt << "\x1B[38;2;" << vec.m_x << ";" << vec.m_y << ";" << vec.m_z << "m";
        return fmt.str();
#endif
    }
}
#endif // __COLOR_HPP__