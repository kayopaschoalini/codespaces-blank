#include<stdio.h>
int main()
{
    char escolha;
    printf("insira V para carro,P para caminhonete,onibus e picaps,C para caminhoes ou M para moto: \n");
    scanf("%c%*c",&escolha);
    if (escolha == 'v' || escolha == 'V'){
        float pv,vimp;
        printf("insira o valor do veiculo \n");
        scanf ("%f%*c",&pv);
        vimp = (pv * 0.04);
        printf("o valor do ipva e de: %.2f \n",vimp);
    }
    else if(escolha == 'm' || escolha == 'M'){
        float mp,vmp;
            printf("insira o valor da moto: \n");
            scanf("%f%*c",&mp);
            vmp = (mp* 0.02);
            printf("o valor do ipva da moto e de %.2f : \n",vmp);
        }
        else if(escolha == 'p' || escolha == 'P'){
            float pp,pimp;
            printf("insira o valor do veiculo: \n");
            scanf("%f%*c",&pp);
            pimp = (pp*0.02);
            printf(" o valor do ipva do seu veiculo e de %.2f: ",pimp);
        }
        else if(escolha == 'c' || escolha == 'C'){
            float pcc,ipcc;
            printf("informe o valor do caminhao: ");
            scanf("%f%*c",&pcc);
            ipcc = (pcc*0.015);
            printf("o valor do ipva do caminhao e de %.2f: ",ipcc);
        }
    getchar();
    return 0;
}