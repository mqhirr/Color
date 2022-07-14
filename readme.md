# Color (revamped)
A C++ color library for C++11 and later.

#### Usage

```cpp
#include <iostream>
#include "color/color.hpp"

auto main() -> int
{
    std::cout << 
    /* Color: Green */
    color::rgb(math::vector3i(0, 255, 0)) <<
    "Hello, World!" <<
    /* Color: White */
    color::rgb();
}
```

#### How It Works
- It uses ANSI escape sequences to set the color
- and to output the text for C++20 and later it uses std::format but for C++17 and earlier it uses std::stringstream.

#### Testing
- Visit the example folder.
- I tested this on Visual Studio 2022 and Linux (Clang++ 11.0.1-2 and g++ 10.2.1)