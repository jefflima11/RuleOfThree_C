#include <stdio.h>

double main()
{
    // Declaração das variaveis.
    float var1,var2,var3,result;
    
    printf("Olá, bem vindo ao assistente de regra de três!\n");
    
    //Coleta de valores.
    printf("Primeiro vamos ao primeiro valor encontrado:\n");
    scanf("%f",&var1);
    
    printf("Agora informe o quanto %.0f representa:\n",var1);
    scanf("%f",&var2);
    
    printf("E por fim, informe o valor de comparação:\n");
    scanf("%f",&var3);
    
    // Calculo da regra de três.
    result = (var3*var2)/var1;
    
    // Retorno do resultado ao usuário
    printf("%.2f esta para %.2f%% porcento assim como %.2f esta para %.2f%%",var1,var2,var3,result);

    return 0;
}
