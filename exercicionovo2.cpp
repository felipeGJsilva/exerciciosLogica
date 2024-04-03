# include <iostream>

int main(){

    int a,b;

    printf("digite o primeiro numero: ");
    scanf("%d",&a);
    printf("digite o segundo numero: ");
    scanf("%d",&b);

    if (a >b)
    {
        printf("o numero %d é maior que o numero %d",a,b);

    }

     if (a < b)
    {
        printf("o numero %d é menor que o numero  %d",a,b);
        
    }

     if (a >b)
    {
        printf("o numero %d é igual que o numero%d",a,b);
        
    }

    return false;
}

