/*
** Aran Iglesias Fernandez
** Telecomunicaciones
** Fihcero laberinto1.c
*/

#include <stdio.h>
#include <stdlib.h> //me da la funcion de atoi
#include "laberinto.h"
#include "encruta1.h"


#define PARAMERROR "Número incorrecto de parámetros.\n"
#define POSITIONERROR "El punto (%d, %d) no forma parte del laberinto.\n"
#define OBSTA "El punto (%d, %d) es un obstáculo. No es válido.\n"
#define NOSAL "Desde el punto (%d, %d) no hay salida.\n"

int main(int argc, char * argv[]){
  //comienza en (columna, fila)
  //en la tab. bidimensional (fila, columna)
  char multdim[NFIL][NCOL] = {LABERINTO};

  //tambien se puede hacer con variable error
  //para evitar if anidadods
     if(argc == 3){
        int ncol = atoi(argv[1]);
        int nfil = atoi(argv[2]);

	if(ncol > NCOL -1 || ncol < 0 || nfil > NFIL - 1 || nfil < 0 )
	  printf(POSITIONERROR, ncol, nfil);
	
	else
	  if ( multdim[nfil][ncol] == '#')
	    printf(OBSTA, ncol, nfil);
	
	  else{
	    int valor = encuentraRuta(ncol, nfil, multdim);
	  
	    if(valor != 0){
	      //apra imprimir laberinto
	      for(int i = 0; i < NFIL; i++){
		for(int j = 0; j < NCOL; j++){
		  printf("%c", multdim[i][j]);
		}
		printf("\n");
	      }
	    
	    }else
	      printf(NOSAL,ncol, nfil);
	  }
   
     }else
       printf(PARAMERROR);
    
      
	  
	
    
  
  return 0;
}
