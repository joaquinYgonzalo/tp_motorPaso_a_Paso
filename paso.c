#include "pasos.h"
#include "motor.h"
#include "MKL25Z4.h"
int cant_pasos = pasos;
char PasoNormal, PasoCompleto, MedioPaso;
void N(void PasoNormal){
    do{
        cant_pasos =pasos;
    }while(PasoNormal);
}
void C(void PasoCompleto){
    do{
        cant_pasos = pasos;
    }while(PasoCompleto);
}
void M(void MedioPaso){
    do{
        cant_pasos = pasos
    } while (MedioPaso);  
}