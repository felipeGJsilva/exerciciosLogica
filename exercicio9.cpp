# include <iostream>

int main(){
    int n1;
    printf("Digite o numero: ");
    scanf("%d", &n1);
    
    bool result = ( n1 < 0 );
    int conta = !(n1 % 2);

    printf("Resultado: %d", result);
    printf("Resultado: %d", conta);

    return false;
}
    
