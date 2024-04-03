# include <iostream>

int main(){

    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    int resto = ((num % 3 ==0)&& (num % 5 == 0));
    printf("%d",resto);
    return 0;

}