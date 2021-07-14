#include "Board.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;



void ariel::Board::post(unsigned int row, unsigned int col, enum ariel::Direction dir, const string &st){

    this->col=col;

}
std::string ariel::Board::read(unsigned int row, unsigned int col, enum ariel::Direction dir, int length){
    return "still not";
}
std::string ariel::Board::show(){
    return "still not";
}
