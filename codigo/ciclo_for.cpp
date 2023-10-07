#include <stdio.h>
/*
    Problema que despliega numeros con un ciclo for , comparado como comentario con un 
    programa que realiza lo mismo en lenguaje ensamblador
    Valores predefinidos
    Guiado en problemas en linea

*/

    //@Author       AAngel777
    //@Date         6 Oct 2023
int  main(void)
{

int i;
for(i=100; i>0; i=i-2)
{

printf("%d\n", i);

}
return 0;
/*.text
.global main
main:	push	{r4, r5, r6, lr}
	mov	r4, #100
	ldr	r5, =var1
.L2:	mov	r1, r4
	mov	r0, r5
	bl	printf
	subs	r4, r4, #2
	bne	.L2
	pop	{r4, r5, r6, pc}*/
}
