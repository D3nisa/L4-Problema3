#include <stdio.h>
#include <stdlib.h>
int interschimbare(int* a, int* b) {
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
int main() {
	int a, b;
	printf("Introduceti cele 2 valori:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	//apelam functia
	interschimbare(&a, &b);
	printf("Valorile dupa interschimbare sunt: %d %d\n", a, b);
	system("pause");
	return 0;
}