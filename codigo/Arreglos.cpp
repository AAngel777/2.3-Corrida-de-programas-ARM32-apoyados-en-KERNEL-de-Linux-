#include <iostream>
/*
    Problema de Arreglos en c++ , comparado como comentario con un 
    programa que realiza lo mismo en lenguaje ensamblador
    Valores predefinidos
    Guiado en problemas en linea

*/

    //@Author       AAngel777
    //@Date         6 Oct 2023
int main() {
    const int tamanoArreglo = 5; // Definimos el tamaño del arreglo como 5.
    int arreglo[tamanoArreglo] = {10, 20, 30, 40, 50}; // Declaración del arreglo con valores iniciales.

    // Mostramos los valores almacenados en el arreglo.
    std::cout << "Los valores del arreglo son: ";
    for (int i = 0; i < tamanoArreglo; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;

    return 0;
    /*
    @ DATA SECTION

.data
string:	.asciz	"%d\n"				@ formato para imprimir resultado
vect:	.word	8, 10, -3, 4, -5, 50, 2, 3	@ arreglo de valores

@ CODE SECTION

.text
.extern printf			@ funcion externa de C
.global main			@ punto inicial de ejecucion

main:
	push	{r0, r1}	@ valores que queremos regresar a su valor inicial
	ldr	r0, =vect	@ cargar los valores del arreglo al registro r0
	mov	r1, #8		@ cuantos valores
	mov	r8, #4		@ recorrido del arreglo de uno en uno
loop:
	ldr	r4, [r0]	@ inicio del loop y carga del primer valor: min
	ldr	r5, [r0, #4]	@ carga del segundo valor a comparar: v[i]
	mov	r6, #1		@ inicio del contador i=1
if:
	cmp 	r5, r4		@ v[i]<min ???
	blt	new_min		@ TRUE
else:
	add	r6, r6, #1	@ FALSE: i++
	b	new_iter	@ continuar...
new_min:
        mov     r4, r5		@ min=v[i]
        add     r6, r6, #1	@ i++
        b       new_iter	@ continuar...
new_iter:
        cmp     r6, r1		@ caso general del loop: i<8
        beq     _end		@ FALSE
        mul     r7, r6, r8	@ TRUE: cambio del indice del arreglo
        ldr     r5, [r0, r7]	@ v[i] -> r5
        b       if		@
_end:
	ldr	r0, =string	@ carga de caracteres del string
	mov	r1, r4		@ valor a imprimir con formato en la consola
	bl	printf		@ printf() de C
	pop	{r0, r1}	@ recuperacion de valores iniciales
	bx	lr		@ BREAK
    */
}
