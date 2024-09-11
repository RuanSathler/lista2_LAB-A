#include <stdio.h>

void ImprimeTroco(int troco){

  int galeoes, sicles, nuques;

  nuques = troco % 29;
  troco = troco /29;
  
  sicles = troco % 17;
  troco = troco - sicles;

  galeoes = troco / 17;
  
  
  printf("Seu troco eh %d galeoes, %d sicles e %d nuques, Harry!\n", galeoes, sicles, nuques);
}


int LerMoeda(){
  int numLido;
  scanf("%d:", &numLido);

  return numLido;
}

int TransfomaEmNuque(int galeoes, int sicles, int nuques){
  int tNuques;
  tNuques = ((galeoes * 17) * 29) + (sicles*29) + nuques;

  return tNuques;
}

void Venda(int galeoes1, int sicles1, int nuques1, int galeoes2, int sicles2, int nuques2){
  int troco;  
  
  
  troco = TransfomaEmNuque(galeoes2, sicles2, nuques2) - TransfomaEmNuque(galeoes1, sicles1, nuques1);
  ImprimeTroco(troco);
}


int main(){
  int galeoes1, sicles1, nuques1, galeoes2, sicles2, nuques2;

  galeoes1 = LerMoeda();
  sicles1 = LerMoeda();
  nuques1 = LerMoeda();

  galeoes2 = LerMoeda();
  sicles2 = LerMoeda();
  nuques2 = LerMoeda();

  
  Venda(galeoes1, sicles1, nuques1, galeoes2, sicles2, nuques2);
  
  return 0;
}