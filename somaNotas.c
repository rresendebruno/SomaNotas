#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(void)
{	
  setlocale(LC_ALL, "Portuguese");
  int nota1, nota2, Soma;
  char nome[11];
  
  printf("Digite seu nome:");
  scanf("%s", nome);
  
  printf("Digite sua nota da primeira prova: ");
  scanf("%d", &nota1);
  
  printf("Digite sua nota da segunda prova: ");
  scanf("%d", &nota2);
  
  Soma = (nota1 + nota2)/2;
  
  if(Soma >= 7)
  {
    printf("Parab�ns %s voc� est� aprovado", nome);
  }
  else
  {
    printf("Infelizmente %s voc� est� de recupera��o", nome);
  }
  return(0);
}
