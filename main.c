/*
 * main.c
 * Resposta do exercício 2 do capítulo 6.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void) {

	Lista *l = iniciar();

	add(l, 2);
	add(l, 6);
	add(l, 48);
	add(l, 26);
	add(l, 1);
	add(l, 7);
	add(l, 9);
	add(l, 0);
	add(l, 57);
	add(l, 10);

	int i;
	int tamanho_lista = size(l);
	int soma = 0;
	for(i = 1; i <= tamanho_lista; i++) {
		soma += get(l, i);
	}

	printf("A soma dos elementos da lista é %d.", soma);

	return 0;
}

