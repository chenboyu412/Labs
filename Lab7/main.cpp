#include <iostream>
#include <vector>
#include "Media.h"
#include "Book.h"
#include "DVD.h"
using namespace std;

int main(){

    Book book("BOOK");//creating an object of Book class
    DVD dvd("DVD");//creating an object of DVD class

    //creating a vector of pointers to Media objects and adding the addresses of book and dvd to the vector
    vector<Media *>vectors{&book, &dvd};

    //calling the showType function for the first element of the vector, which is a pointer to the book object
    vectors[0] -> showType();
    //calling the showType function for the second element of the vector, which is a pointer to the dvd object
    vectors[1] -> showType();

}