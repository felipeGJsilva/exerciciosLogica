# include <iostream>

int main(){
    int ano;
    printf("Ano:");
    scanf("%d", &ano);
    int cal = ((ano %4 == 0) && (ano % 100 != 0) || (ano % 100 == 0) && (ano % 400 == 0));
    printf("\n%d", cal);
}