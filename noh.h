#include <iostream>
using namespace std;

class Noh{
	private:
		int mDado;
		unsigned mPosic;
		Noh* mPedProx;
		Noh* mPedAnt;
	public:
		Noh(int mDado);
		~Noh();
		Noh* ReturnAnt(){return mPedAnt;}
		Noh* ReturnProx(){return mPedProx;}
		void AssignAnt(Noh* mPedAnt){this->mPedAnt = mPedAnt;}
		void AssignProx(Noh* mPedProx){this->mPedProx = mPedProx;} 
		int ReturnDados(){return mDado;}
		void AssignPos(unsigned mPosic){this->mPosic = mPosic;}
		unsigned ReturnPos(){return mPosic;}

};