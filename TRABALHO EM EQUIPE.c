#include <stdio.h>
#include <locale.h>
#include <string.h>

void ordenaNumeros() {
float n1, n2, n3;
printf("---COMPARAÇÃO DE VARLORES---\n");

	printf("Informe o primeiro valor: \n");
		scanf("%f", &n1);
		
	printf("Informe o segundo valor: \n");
		scanf("%f", &n2);
		
	printf("Informe o terceiro valor: \n");
		scanf("%f", &n3);

system("cls");
//SISTEMA DE COMPRAÇÃO ENTRE MAIORES , INTERMEDIARIOS, MENORES E IGUAIS	
if (n1 >= n2 && n1 >= n3) {
        printf("Maior: %.2f\n", n1);
        if (n2 >= n3) {
            printf("Intermediário: %.2f\n", n2);
            printf("Menor: %.2f\n", n3);
        } else {
            printf("Intermediário: %.2f\n", n3);
            printf("Menor: %.2f\n", n2);
        }
    } else if (n2 >= n1 && n2 >= n3) {
        printf("Maior: %.2f\n", n2);
        if (n1 >= n3) {
            printf("Intermediário: %.2f\n", n1);
            printf("Menor: %.2f\n", n3);
        } else {
            printf("Intermediário: %.2f\n", n3);
            printf("Menor: %.2f\n", n1);
        }
    } else {
        printf("Maior: %.2f\n", n3);
        if (n1 >= n2) {
            printf("Intermediário: %.2f\n", n1);
            printf("Menor: %.2f\n", n2);
        } else {
            printf("Intermediário: %.2f\n", n2);
            printf("Menor: %.2f\n", n1);
        }
    }
		
if (n1 == n2 && n1 == n3) {
        printf("Valores iguais: %.2f, %.2f, %.2f\n", n1, n2, n3);
    } else if (n1 == n2) {
        printf("Valores iguais: %.2f, %.2f\n", n1, n2);
    } else if (n1 == n3) {
        printf("Valores iguais: %.2f, %.2f\n", n1, n3);
    } else if (n2 == n3) {
        printf("Valores iguais: %.2f, %.2f\n", n2, n3);
    }
}

int main(){
char login[20], senha[20];
char loginCorreto[] = "adm";
char senhaCorreta[] = "123";
int tentativas = 0;
int sucessoLogin = 0;

	setlocale(LC_ALL, "");
while (tentativas < 3 && !sucessoLogin){
	printf("Insira o seu login: \n");
		scanf("%s", &login);
	printf("Insira sua senha: \n");
		scanf("%s", &senha);
		
system("cls");
	
if (strcmp(login, loginCorreto) == 0 && strcmp(senha, senhaCorreta) == 0){
	printf("Login feito com sucesso! \n");
	ordenaNumeros();
		sucessoLogin = 1;
} else{
	printf("Login ou senha incorretos, tente novamente.\n");
tentativas++;
}

if (tentativas == 3){
	printf("Número máximo de tentativas atingido, tente novamente mais tarde.\n");

	}
	
}
	


return 0;
}
