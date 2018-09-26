#ifndef ENUMS_H_INCLUDED
#define ENUMS_H_INCLUDED

#define TAM_NOMBRE 51

struct alumno{

    unsigned long telefono;
    unsigned char edad;
    char nombre[TAM_NOMBRE];
    float notas[5];
};

struct profesor{

    unsigned long telefono;
    unsigned char edad;
    char nombre[TAM_NOMBRE];
};

struct jefeDeEstudios{

    char nombre[TAM_NOMBRE];
};

void probarEnumAlumnos();

#endif // ENUMS_H_INCLUDED
