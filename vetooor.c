#include <stdio.h>
#include <stdlib.h>
 int main() {
int vetor[10];
int i;

for (i = 0; i < 10; i++) {
printf("Digite o numero da posição %d: ",  i + 1);
scanf("%d", &vetor[i]);
vetor[i] = 2 * vetor[i];

}

printf("valor dobrado:\n");
for (i = 0; i < 10; i++) {
	printf("posição %d: %d\n", i + 1, vetor[1]);
}

return 0;
}






































