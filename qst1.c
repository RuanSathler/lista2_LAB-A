#include<stdio.h>
int LerInt(){
  int numLido;
  scanf("%d:", &numLido);

  return numLido;
}

int TransfomaEmSegundo(int hora, int minuto, int segundo){
  int Tsegundos;
  Tsegundos = ((hora*60)*60) + (minuto*60) + segundo;

  return Tsegundos;
}


void ImprimeHora(int segundos){
  int segundo, minuto, hora;
  segundo = segundos % 60;
  minuto = (segundos  / 60) % 60;
  hora = (segundos  / 60) / 60;

  if(hora<24){
   printf("%.2d:%.2d:%.2d", hora, minuto, segundo);
  }
  else{
    hora = hora-24;
    printf("%.2d:%.2d:%.2d", hora, minuto, segundo);
  }
}


void MarcaAlarme(int hora1, int minuto1, int segundo1, int hora2, int minuto2, int segundo2){
  int horaEmSecondos;  
  
  
  horaEmSecondos = TransfomaEmSegundo(hora1, minuto1, segundo1) + TransfomaEmSegundo(hora2, minuto2, segundo2);
  ImprimeHora(horaEmSecondos);
}


int main(){
  int hora1, minuto1, segundo1, hora2, minuto2, segundo2;

  hora1 = LerInt();
  minuto1 = LerInt();
  segundo1 = LerInt();

  hora2 = LerInt();
  minuto2 = LerInt();
  segundo2 = LerInt();
  
  MarcaAlarme(hora1, minuto1, segundo1, hora2, minuto2, segundo2);
  
  return 0;
}