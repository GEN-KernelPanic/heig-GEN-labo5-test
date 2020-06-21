/*
 -----------------------------------------------------------------------------------
 Labo        : 
 File        : NewRelease.hpp
 Author(s)   : Clarisse Fleurimont
 Date        : 21.06.2020
 Remark(s)   :
 -----------------------------------------------------------------------------------
*/

#ifndef HEIG_POO2_LABO03_NEWRELEASE_HPP
#define HEIG_POO2_LABO03_NEWRELEASE_HPP


#include "Movie.hpp"

class NewRelease : public Movie {
public:
    NewRelease(const std::string& title);
    int getPriceCode() const;
};


#endif //HEIG_POO2_LABO03_NEWRELEASE_HPP
