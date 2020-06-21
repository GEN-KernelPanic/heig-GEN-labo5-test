add_library(labo5 "")

target_sources(
        labo5
        PRIVATE
        Customer.cpp
        Movie.cpp
        main.cpp
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/Customer.h
        ${CMAKE_CURRENT_LIST_DIR}/Movie.h
        ${CMAKE_CURRENT_LIST_DIR}/Rental.h
)

target_include_directories(
        labo5
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)