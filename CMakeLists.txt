cmake_minimum_required(VERSION 3.20)
project(polinomial_regression C)

set(CMAKE_C_STANDARD 99)

add_executable(polinomial_regression main.c src/simple_polynomial_regression/simple_polynomial_regression.h src/gauss/gauss_method.h src/gauss/gauss_method.c src/simple_polynomial_regression/simple_polynomial_regression.c src/utils/utils.c src/utils/utils.h src/csv_reader/csv_reader.c src/csv_reader/csv_reader.h)

file(GLOB MY_FILES "csv_examples/*.csv")
file(COPY ${MY_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})