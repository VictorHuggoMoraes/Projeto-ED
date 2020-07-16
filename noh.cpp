#include <iostream>
#include "noh.hpp"
using namespace std;

Noh::Noh(int mDado){
	this->mDado = mDado;
	this->mPedAnt = NULL;
	this->mPedProx = NULL;
	this->mPosic = 0;  
}

Noh::~Noh(){}