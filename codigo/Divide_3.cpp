#include <iostream>
/*
    Problema que divide 9 entre 3 en c++ , comparado como comentario con un 
    programa que realiza lo mismo en lenguaje ensamblador
    Valores predefinidos
    Guiado en problemas en linea

*/

    //@Author       AAngel777
    //@Date         6 Oct 2023
int main() {
    std::cout << "El resultado de la división 9 / 3 es: " << 9 / 3 << std::endl;
    return 0;
    /*
    .global main
.func main
.arm

main:    	ADR R5, thumbcode+1     //se asigna la dirección de la etiqueta thumbcode al registro 5
		MOV LR, PC              //se almacena la siguiente instrucción en el registro LR
		BX R5                   //salto al registro r5

exit:   	MOV R0, R3
		MOV R7, #1
		SWI 0

.thumb
thumbcode:      MOV R0, #9     //Se almacena el valor del numerador
		MOV R1, #3     //Se almacena el valor del denominador
		MOV R3, #0     //Se utiliza como contador para saber cuantas veces cabe
		
loop:    	ADD R3, #1    //Se aumenta el contador en 1
		SUB R0, R1    //Se resta valor del denominador al valor del numerador
		BGE loop      //Se preguna se el resultado es un valor mayor o igual
		SUB R3, #1    //Resultado de la división
		BX LR	      //Retorno a al código principal
    */
}

