#include "iostream"
#include "string"
/*
    Problema de Captura de datos en c++ , comparado como comentario con un 
    programa que realiza lo mismo en lenguaje ensamblador
	    Guiado en problemas en linea

*/

    //@Author       AAngel777
    //@Date         6 Oct 2023
using namespace std;

int main()
{
    cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << "\n";
    //La instrucción \n es un salto de línea Mostrando los textos separados

   string nombre;//En esta variable estará almacenado el nombre ingresado.
   cin >> nombre; //Se lee el nombre

   cout << "Bienvenido al sistema " << nombre << ". Gracias por usar nuestra aplicación" << "\n";


   return 0;
   /*
   .text
	.global main
	.extern printf
	.extern scanf

main:   push 	{ip, lr}	@ push return address + dummy register
				@ for alignment

	ldr	r0, =prompt	@ print the prompt
	bl	printf

	ldr     r0, =format	@ call scanf, and pass address of format
	ldr	r1, =num	@ string and address of num in r0, and r1,
	bl	scanf		@ respectively.

	ldr	r1, =num	@ print num formatted by output string.
	ldr	r1, [r1]
	ldr	r0, =output
	bl	printf


        pop 	{ip, pc}	@ pop return address into pc
   */
}
