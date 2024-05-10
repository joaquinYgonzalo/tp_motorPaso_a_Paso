#include "motor.h"
#include "MKL25Z4.h"
#define in1 1
#define in2 2
#define in3 3
#define in4 4

int pines[4]={in1,in2,in3,in4};
int cant_pasos= 0;
              
void PasoCompleto(int pasos){
    cant_pasos= 0;
    for(int i=0; i<pines;i++){
        PTA->PSOR|=(1u<<i);
    }
    do{
        if(cant_pasos<pasos){
            cant_pasos =  pasos-cant_pasos;
        }
        if(pasos==1){
            PTA->PSOR|=(1u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos == 2){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(1u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos == 3){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(1u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos == 4){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(1u<<4);
            cant_pasos ++;
        }       
    }while(cant_pasos == pasos);
 }
 void PasoNormal(int pasos){
    cant_pasos= 0;
    for(int i=0; i<pines;i++){
        PTA->PSOR|=(1u<<i);
    }
    do{
        if (cant_pasos<pasos){
            cant_pasos = pasos-cant_pasos;
        }
        if(pasos==1){
            PTA->PSOR|=(1u<<1);
            PTA->PSOR|=(1u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos==2){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(1u<<2);
            PTA->PSOR|=(1u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos == 3){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(1u<<3);
            PTA->PSOR|=(1u<<4);
            cant_pasos ++;
        }else if(pasos==4){
            PTA->PSOR|=(1u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(1u<<4);
            cant_pasos ++;
        }
    }while(cant_pasos==pasos);
 }
 void MedioPaso(int pasos){
    cant_pasos=0;
    for(int i=0; i<pines;i++){
        PTA->PSOR|=(1u<<i);
    }
    do{
        if(cant_pasos<pasos){
            cant_pasos = pasos-cant_pasos;
        }
        if(pasos==1){
            PTA->PSOR|=(1u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos==2){
            PTA->PSOR|=(1u<<1);
            PTA->PSOR|=(1u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos == 3){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(1u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos==4){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(1u<<2);
            PTA->PSOR|=(1u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos==5){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(1u<<3);
            PTA->PSOR|=(0u<<4);
            cant_pasos ++;
        }else if(pasos==6){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(1u<<3);
            PTA->PSOR|=(1u<<4);
            cant_pasos ++;
        }else if(pasos==7){
            PTA->PSOR|=(0u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(1u<<4);
            cant_pasos ++;
        }else if(pasos==8){
            PTA->PSOR|=(1u<<1);
            PTA->PSOR|=(0u<<2);
            PTA->PSOR|=(0u<<3);
            PTA->PSOR|=(1u<<4);
            cant_pasos ++;
        }
    }whiile(cant_pasos==pasos);
 }