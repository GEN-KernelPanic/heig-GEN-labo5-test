/*
 -----------------------------------------------------------------------------------
 Labo        : 
 File        : NewRelease.hpp
 Author(s)   : Clarisse Fleurimont, Matthieu Burguburu et Alexandre Simik
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
    int getAmount(int daysRented) const;
};


#endif //HEIG_POO2_LABO03_NEWRELEASE_HPP
