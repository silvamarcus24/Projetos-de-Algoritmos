#include <stdio.h>

int main() {

int dias, anos, meses, dias_restantes;

scanf("%d", &dias);

anos = dias / 365;
meses = (dias % 365) / 30;
dias_restantes = (dias % 365) % 30;

printf("%d ano(s)\n", anos);
printf("%d mes(es)\n", meses);
printf("%d dia(s)\n", dias_restantes);



return 0;
}
