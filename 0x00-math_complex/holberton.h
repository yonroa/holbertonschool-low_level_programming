#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include<stdio.h>
#include<math.h>
/**
 * struct complex - Define the structure of a number complex
 * @re: Real part of the complex number
 * @im: Imaginary part of the complex number
 */
typedef struct complex
{
	double re;
	double im;
} complex;
void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg(double m, double arg, complex *c3);
#endif
