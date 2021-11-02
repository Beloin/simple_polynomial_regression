cmake_minimum_required(VERSION 3.20)
project(polinomial_regression C)

set(CMAKE_C_STANDARD 99)

add_executable(polinomial_regression main.c src/simple_polynomial_regression/simple_polynomial_regression.h src/gauss/gauss_method.h src/gauss/gauss_method.c src/simple_polynomial_regression/simple_polynomial_regression.c src/simple_polynomial_regression/poly_utils.c src/utils/utils.c src/utils/utils.h)
