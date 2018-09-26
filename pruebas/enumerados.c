#include <stdio.h>
#include <stdlib.h>
#include "enums.h"

//enumeramos los dias de la semana
enum dia {lunes, martes, miercoles} diaSemana;
enum mes {enero, febrero, marzo};

void probarEnumerados(){

    printf("%d\n\n", lunes);

    diaSemana = martes;
    if(diaSemana != martes){

        printf("hoy no es martes\n\n!");
    }
    else{

        printf("hoy si es martes\n\n");
    }
}

void probarEnumAlumnos(){

    struct alumno alu;
    alu.edad = 25;
    alu.telefono = 666666666;

    printf("%d", alu.edad);
}


