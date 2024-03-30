# include <iostream>

int main(){

    int lado1, lado2, lado3;

    printf("Digite o numero do primeiro lado:  ");
    scanf("%d", &lado1);

    printf("Digite o numero do segundo lado: ");
    scanf("%d", &lado2);

    printf("Digite o numero do terceiro lado: ");
    scanf("%d", &lado3);
    
    int soma = lado1 + lado2;
    printf("%d + %d = %d \n",lado1, lado2,soma );

    bool result = soma > lado3;

    printf("resultado %d", result);
    
    return false;
}