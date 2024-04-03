# include <iostream>

int main(){
    int b,a;

    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digite a altura: ");
    scanf("%d", &a);
    
    int result = (b*a)/2 ;

    printf("A area do retangulo é %d", result);

    return false;

}