# include <iostream>

int main(){
    int n1;
    printf("Digite o numero: ");
    scanf("%d", &n1);
   
    bool result = ( n1 < 0 );
    printf("Resultado é: %d", result);
    return false;
}