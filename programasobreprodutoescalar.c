#include <stdio.h>
#include <locale.h>


main(){

	 setlocale(LC_ALL,"portuguese");
	 
  
 int i, vetorU[5], vetorV[5], Valor=0, operacao;
 
 printf("\nBem vindo a calculadora sobre Produto Escalar \n");
 
 printf ("\nDeseja utilizar qual dos formatos de operações entre os vetores ?\n");
 printf ("\n1- u(a,b,c)*v(a,b,c)");
 printf ("\n2- u(a,b,c,d)*v(a,b,c,d)");
 printf ("\n3- u(a,b,c,d,e)*v(a,b,c,d,e)\n\n");
  
  printf ("Digite a opção: ");
  scanf ("%d", &operacao);
  
//case1-------------------------------------------------------------------------
	switch (operacao){
    system("clear");
  case 1:
   
  for(i=0; i<3; i++)
{
   printf("\n Digite o %dº numero para Vetor U : ", i+1);  
   scanf("%d", &vetorU[i]);  
}

for(i=0; i<3; i++)
{
   printf("\n Digite o %dº numero para Vetor V : ", i+1);  
   scanf("%d", &vetorV[i]);  
}   
for(i=0; i<3; i++)
{	   
   Valor += vetorU[i] * vetorV[i];
}
   printf("\n\n Resposta: %d\n", Valor);	  
  break;

  //case 2---------------------------------------------------------------------
    system("clear");
	case 2:
    
    for(i=0; i<4; i++)
{
   printf("\n Digite o %dº numero para Vetor U : ", i+1);  
   scanf("%d", &vetorU[i]);  
}

for(i=0; i<4; i++)
{
   printf("\n Digite o %dº  numero para Vetor V : ", i+1);  
   scanf("%d", &vetorV[i]);  
}
   
for(i=0; i<4; i++)
{	   
   Valor += vetorU[i] * vetorV[i];
}

   printf("\n\n Resposta: %d\n", Valor);	  
  break;

  //case 3---------------------------------------------------------------------
      system("clear");
      case 3:
      for(i=0; i<5; i++)
{
   printf("\n Digite o %dº valor do Vetor U : ", i+1);  
   scanf("%d", &vetorU[i]);  
}

for(i=0; i<5; i++)
{
   printf("\n Digite o %dº valor do Vetor V : ", i+1);  
   scanf("%d", &vetorV[i]);  
}

for(i=0; i<5; i++)
{	   
   Valor += vetorU[i] * vetorV[i];
}

   printf("\n\n Resposta: %d\n\n", Valor);	  
  
  default:
  printf("\nOpcao invalida\t\n");
  	
  }
 system("pause");
}








