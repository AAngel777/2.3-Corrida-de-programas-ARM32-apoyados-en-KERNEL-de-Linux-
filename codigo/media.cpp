#include <iostream>

int main() {
    // Definir los tres números predefinidos
    double numero1 = 5.0;
    double numero2 = 7.0;
    double numero3 = 9.0;

    // Calcular la media
    double media = (numero1 + numero2 + numero3) / 3.0;

    // Mostrar el resultado
    std::cout << "La media de los tres números es: " << media << std::endl;

    return 0;
    /*
    
.text
.extern printf
.global main
main:
	@ primera ...
	push	{r0, r1}	@ almacenamiento de valores iniciales
	mov 	r0, #3
	mov 	r1, #2
	add 	r2, r0, r1	@ (r0+r1)
	mov 	r2, r2, LSR #1	@ (r0+r1)/2
	mov 	r1, r2		@ impresion del resultado...
	ldr 	r0, =string
	bl	printf

	@ segunda ...
        mov     r0, #4
        mov     r1, #6
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf

	@ tercera ...
        mov     r0, #7
        mov     r1, #2
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf

	@ cuarta ...
        mov     r0, #0
        mov     r1, #3
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf

	@ quinta ...
        mov     r0, #3
        mov     r1, #5
        add     r2, r0, r1
        mov     r2, r2, LSR #1
        mov     r1, r2
        ldr     r0, =string
        bl      printf
	pop	{r0, r1}	@ recuperacion de estados iniciales para salir
	bx	lr		@ BREAK*/
}
