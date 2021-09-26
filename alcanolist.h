struct nodoRamificacion{  //se estructura el nodo de la rama
  int numC;
  int numH;
  int nodo_en_alcano;
  struct nodoRamificacion *sig;
};typedef struct nodoRamificacion NodoR;


struct nodoEstructura{
  int numC;
  int numH; // cantidad de hidrogenos 
  //lisRama *ramInf;
  //lisRama  *ramSup;
  struct nodoEstructura *sig;
};typedef struct nodoEstructura NodoE;



struct listAlcano{ 
  NodoE *head;
  int n; // largo del alcano 
  int numRamI;
  int numRamS;
};typedef struct listAlcano alcanoL;

alcanoL *crearLista();
void insertarFinal(alcanoL *l,int datoC, int datoH);
void insertarRama(alcanoL *l,int datoC, int datoH);
