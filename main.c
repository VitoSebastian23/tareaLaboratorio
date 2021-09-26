#define MAXCHARS 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alcanoslista.c"

int numAlcano,c,k;


//int numAlcano = 0;


int main (void){
  FILE *f;
  char fila[MAXCHARS];
  f = fopen("alcanos.txt","r");
  fscanf(f,"%d", &numAlcano);
  alcanoL lisA[numAlcano];


  for (c=0;c<numAlcano;c++){
    lisA[c] = *crearLista();
    fscanf(f,"%s",fila);
    int largo=strlen(fila);
    int k=0;
    while (k<largo){
      if (fila[k]== '3'){
        insertarAlcano(&lisA[c],1,fila[k]);

      }if (fila[k]=='2'){
        insertarAlcano(&lisA[c],1,fila[k]);
      

      }if (fila[k]=='-'){
        k++;
        while (fila[k] != '#'){
          //insertarAlcano(&lisA[c],1,fila[k-1]);
          insertarRama(&lisA[c],1,fila[k]);
          k++;
        }
      }if(fila[k]=='+'){
        k++;
        while (fila[k] != '#'){
          //insertarAlcano(&lisA[c],1,fila[k-1]);
          insertarRama(&lisA[c],1,fila[k]);
          k++;
        }
      }
      
      
    }
  }
}
          
