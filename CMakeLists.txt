cmake_minimum_required(VERSION 3.28)
project(CSES_SpeedRun)

set(CMAKE_CXX_STANDARD 17)

add_executable(CSES_SpeedRun main.cpp
        "Introductory Problems/Weird Algorithm.cpp"
        "Introductory Problems/Missing Number.cpp"
        "Introductory Problems/Repitions.cpp"
        "Introductory Problems/Increasing Array.cpp"
        "Introductory Problems/Permutations.cpp"
        "Introductory Problems/Number Spiral.cpp"
        "Introductory Problems/Two Knights.cpp"
        "Introductory Problems/Two Sets.cpp"
        "Introductory Problems/Bit Strings.cpp"
        "Introductory Problems/Trailing Zeros.cpp"
        "Introductory Problems/Coin Piles.cpp")
