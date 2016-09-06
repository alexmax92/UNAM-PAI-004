//
//  main.c
//  UNAM-PAI-004
//
//  Created by Luis Romero on 8/30/16.
//  Copyright © 2016 Luis Romero. All rights reserved.
//

#include <stdio.h>

#define NOMBRE "Luis" //Directiva (Definición de Macro)
#define EDAD 28 //Directiva (Definición de Macro)
#define MESES (365 / 30.4) //Directiva (Definición de Macro)

long double const PI = 3.14159265359; //Declaración de una constante
const char Vocales[] = { 'A', 'E', 'I', 'O', 'U' };


int main(int argc, const char * argv[])
{
    
    printf("%s tiene %d años.\n\n", NOMBRE, EDAD);
    printf("Cada año tiene aproximadamente %f meses.\n\n", MESES);
    
    //--Tipo de Dato ENUM (Enumerado)
    enum Colores {ROJO=1, AMARILLO, VERDE, AZUL};
    printf("ROJO = %d\n", ROJO);
    printf("AMARILLO = %d\n", AMARILLO);
    printf("VERDE = %d\n", VERDE);
    printf("AZUL = %d\n\n", AZUL);
    
    enum Colores Color;
    Color = ROJO;
    printf("El ROJO está representado por el número %d y el compilador lo llenó automáticamente.\n", Color);
    Color = AMARILLO;
	printf("El AMARILLO esta representado por el numero: %d y el compilador lo lleno automaticamente.\n\n",Color);
	Color = AZUL;
	printf("El AZUL esta representado por el numero: %d y el compilador lo lleno automaticamente.\n\n",Color);
	Color = VERDE;
	printf("El VERDE esta representado por el numero: %d y el compilador lo lleno automaticamente.\n\n",Color);
    
    printf("Pi es una constante equivalente a: %Lf\n", PI);
    
    printf("La primera vocal es %c y la última es %c.\n\n", Vocales[0], Vocales[4]);
    
    return 0;
}
