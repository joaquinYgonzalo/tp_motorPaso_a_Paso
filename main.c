#include "cctype.h"
#include "pasos.h"
#include "motor.h"
#include "MKL25Z4.h"
int pasos, cant_pasos=0;
int main(){
    SIM->SCGC5|=SIM_SGC5_PORTA_MASK;
    for (int i=0; i<4;i++){
        PTA->PSOR|=(1u<<i);
    }
    while(1){
        if('N'){
            do{
                if(cant_pasos<pasos){
                    cant_pasos =pasos-cant_pasos;
                }else if (pasos =1){
                    PTA->PSOR|=(1u<<1);
                    PTA->PSOR|=(1u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos =2){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(1u<<2);
                    PTA->PSOR|=(1u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos =3){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(1u<<3);
                    PTA->PSOR|=(1u<<4);
                    cant_pasos ++;
                }else if (pasos =4){
                    PTA->PSOR|=(1u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(1u<<4);
                    cant_pasos ++;
                }
            }while(PasoNormal);
        }else if('C'){
            cant_pasos=0;
            do{
                if(cant_pasos<pasos){
                    cant_pasos = pasos-cant_pasos;
                }else if (pasos =1){
                    PTA->PSOR|=(1u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos =2){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(1u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos =3){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(1u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos 4){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(1u<<4);
                    cant_pasos ++;
                }
            }while(PasoCompleto);
        }else if('M'){
            cant_pasos=0;
            do{
                if (cant_pasos<pasos){
                    cant_pasos=pasos-cant_pasos;
                }else if (pasos =1){
                    PTA->PSOR|=(1u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos =2){
                    PTA->PSOR|=(1u<<1);
                    PTA->PSOR|=(1u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }
                else if (pasos =3){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(1u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos =4){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(1u<<2);
                    PTA->PSOR|=(1u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos==5){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(1u<<3);
                    PTA->PSOR|=(0u<<4);
                    cant_pasos ++;
                }else if (pasos==6){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(1u<<3);
                    PTA->PSOR|=(1u<<4);
                    cant_pasos ++;
                }else if (pasos==7){
                    PTA->PSOR|=(0u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(1u<<4);
                    cant_pasos ++;
                }else if (pasos===8){
                    PTA->PSOR|=(1u<<1);
                    PTA->PSOR|=(0u<<2);
                    PTA->PSOR|=(0u<<3);
                    PTA->PSOR|=(1u<<4);
                    cant_pasos ++;
                    }
                }while(MedioPaso);
        }
    }
}