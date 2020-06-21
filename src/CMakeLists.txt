add_library(labo5 "")

target_sources(
        labo5
        PRIVATE
        Customer.cpp
        Movie.cpp
        main.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Customer.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Movie.hpp
        ${CMAKE_CURRENT_LIST_DIR}/Rental.hpp
)

target_include_directories(
        labo5
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)