#include <iostream>
#include "noh.h"
using namespace std;

Noh::Noh(int mDado){
	this->mDado = mDado;
	this->mPedAnt = NULL;
	this->mPedProx = NULL;
	this->mPosic = 0;  
}

Noh::~Noh(){}