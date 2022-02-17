cmake_minimum_required(VERSION 3.17)
project(Pary_liczb C)

set(CMAKE_C_STANDARD 99)

add_executable(Pary_liczb main.c)

add_compile_options(gcc -std=gnu11 -O2 -Wall -Wconversion -Werror -o random random.c -lm)

add_compile_options(gcc -std=gnu11 -O2 -Wall -Wconversion -Werror -o sum_N sum_N.c -lm)