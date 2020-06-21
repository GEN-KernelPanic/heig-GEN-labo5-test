// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
public:
    static const int
            REGULAR     = 0,
            NEW_RELEASE = 1,
            CHILDREN    = 2;

    Movie(const std::string& title, int priceCode = REGULAR);

    int getPriceCode() const;
    void setPriceCode(int arg);
    std::string getTitle() const;

private:
    std::string _title;
    int _priceCode;
};


#endif // MOVIE_H