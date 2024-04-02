# include <iostream>
int main(){

    float n1,n2,n3,p1,p2,p3,res;
    
    printf("digite a nota N ");

    scanf("%f",&n1);

    printf("digite a nota N ");

    scanf("%f",&n2);

    printf("digite a nota N ");

    scanf("%f",&n3);

     printf("digite a nota P ");

    scanf("%f",&p1);

    printf("digite a nota P ");

    scanf("%f",&p2);

    printf("digite a nota P ");

    scanf("%f",&p3);

    res = ((n1 + p1)+ (n2 + p2)+ (n3 + p3)) / (p1 + p2 + p3);

    printf("%f",res);

    return false;
}