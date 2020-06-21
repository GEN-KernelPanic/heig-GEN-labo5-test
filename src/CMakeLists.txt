add_library(labo5 "")

target_sources(
        labo5
        PRIVATE
        Customer.cpp
        Movie.cpp
        NewRelease.cpp
        Regular.cpp
        Children.cpp
        main.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Customer.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Movie.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Rental.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Regular.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Children.hpp
        ${CMAKE_CURRENT_LIST_DIR}/NewRelease.hpp
)

target_include_directories(
        labo5
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)