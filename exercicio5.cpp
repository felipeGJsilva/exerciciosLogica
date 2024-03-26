# include <iostream>

int main(){
    int n1;
    printf("Digite a temperatura: ");
    scanf("%d", &n1);

    int cal = ( n1 * 9/5) + 32;

    printf("A temperatura em fahrenheit deu: %d F", cal);


    return false;
}