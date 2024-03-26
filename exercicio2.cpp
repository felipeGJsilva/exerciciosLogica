# include <iostream>

int main(){
    int n1;
    printf("Digite o numero: ");
    scanf("%d", &n1);
    
    int cal = n1 % 2;

    bool confi = (n1 == 0);
    
    printf("Resultado: ", confi);

    return false;

}