#include "alcanoslist.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>



alcanoL* crearLista(){
	alcanoL* creada_alcanoL = (alcanoL*)malloc(sizeof(alcanoL));
	creada_alcanoL -> n= 0;
	creada_alcanoL ->head = NULL;
	printf(" *** LISTA VACIA  CREADA CON EXITO \n");
	return creada_alcanoL;
}


void insertarAlcano(alcanoL *l,int datoC,int datoH){
	NodoE *n = (NodoE*)malloc(sizeof(NodoE));
  n-> numC = datoC;
  n-> numH = datoH;
  n-> sig = NULL;
}

void insertarRama(alcanoL *l,int datoC, int datoH){
	NodoR *n = (NodoR*)malloc(sizeof(NodoR));
  n-> numC = datoC;
	n-> numH = datoH;
	n->sig = NULL;
}
