#include <stdio.h>

float Somar(float a, float b)
{
    float resultado;
    resultado = a + b;
    
    return resultado;
}

float Subtrair(float a, float b)
{
    float resultado;
    resultado = a - b;
    
    return resultado;
}

float Multiplicar(float a, float b)
{
    float resultado;
    resultado = a * b;
    
    return resultado;
}

float Dividir(float a, float b)
{
    float resultado;
    
    if (b == 0)
    {
        printf("Não é posssível divir por 0!\n");
        resultado = 0;
    }
    else
    {
        resultado = a / b;
        return resultado;
    }
}

int main()
{
    float a;
    float b;
    int op;
    float resultado;
    
    printf("Digite o primeiro valor:\n");
    scanf("%f", &a);
    
    printf("Digite o segundo valor:\n");
    scanf("%f", &b);
    
    printf("Digite a equação desejada:\n");
    printf("1-Soma, 2-Subtração, 3-Multiplicação, 4-Divisão:\n");
    scanf("%i", &op);
    
    switch(op)
    {
        //Soma
        case 1:
        resultado = Somar(a,b);
        break;
        
        //Subtração
        case 2:
        resultado = Subtrair(a,b);
        break;
        
        //Multiplicação
        case 3:
        resultado = Multiplicar(a,b);
        break;
        
        //Divisão
        case 4:
        resultado = Dividir(a,b);
        break;
    }
    
    printf("O resultado da operação é: %.2f", resultado);
    

    return 0;
}
