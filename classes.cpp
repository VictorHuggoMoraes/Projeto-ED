#include <iostream>
#include <fstream>
#include "classes.h"


using namespace std;

void SeqSet::Inserir(pacote& _p) {
    Bloco aux;
    fstream arq;
    if (arq) {
        arq.read((char*) &cabSS, sizeof(Cabecalho)); //lê o cabeçalho
        if(cabSS.num == 0) {
            cabSS.num = 1;
            cabSS.posPrimeiro = 0;
            cabSS.posProximo = 1;
            //inserindo primeiro dado e modificando cabeçalho do bloco
            aux.dados[0] = _p;
            aux.cabBloco.quantidade = 1;
            aux.cabBloco.proximo = -1;
            arq.write((char*) &aux, sizeof(Bloco));
        }
        arq.close();
        
    }
}
 

void SeqSet::LerArquivo() {  //TESTE
    Bloco novo;
    ifstream arq;
    arq.read((char*) &cabSS, sizeof(Cabecalho)); //le dados do cabeçalho
    cout << "Numero de Blocos: "<< cabSS.num << " Posicao do Primeiro: " << cabSS.posPrimeiro << " Proximo: " << cabSS.posProximo << endl;
    arq.read((char*) &novo, sizeof(Bloco)); //le dados do primeiro bloco
    cout << novo.cabBloco.quantidade << " "<< novo.cabBloco.proximo<<" "<< novo.idBloco << endl;
    for (int i = 0; i < novo.cabBloco.quantidade; i++) {
        cout << novo.dados[i].tamanho << " ";
    }
    cout << endl;
    arq.close();
}