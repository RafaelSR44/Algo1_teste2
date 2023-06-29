//Código feito pelos alunos:
//Felipe Franco Pasquini
//Matheus Moritz Furlan
//Mauricio de Mello Heibel
//Rafael Santana Rodrigues


#include <iostream>                   //Bibliotecas utilizadas.
#include <locale.h>
using namespace std;


int main() {

setlocale(LC_ALL,"Portuguese");

    long long int cpfIN,A2,A3,A4,A5,A6,A7,A8,A9,A10,V1,V2;
    char C1; //"cpfIN" será utilizado para armazenar o CPF completo.
             //"A2" até "A10" são algorismos categorizados de acordo com os pesos que irão receber.
             //"V1" e "V2" são os digitos a serem calculados.


    cout << "Bem vindo ao gerador/verificador de digitos do CPF!\nPor favor, insira o CPF sem os digitos verificadores, pontos ou hífens e pressione Enter: \n";
             //Introdução cordial para o código.
    cin >> cpfIN;
             //Input para armazenar o cpf a ser gerado ou verificado.


A10=(cpfIN/100000000)*10;
 A9=((cpfIN/10000000)%10)*9;
 A8=((cpfIN/1000000)%10)*8;
 A7=((cpfIN/100000)%10)*7;            //Método para separar cada algorismo do CPF,
 A6=((cpfIN/10000)%10)*6;             //podendo utilizá-los separadamente
 A5=((cpfIN/1000)%10)*5;              //e atribuir seus devidos pesos.
 A4=((cpfIN/100)%10)*4;
 A3=((cpfIN/10)%10)*3;
 A2=(cpfIN%10)*2;
 V1=(A2+A3+A4+A5+A6+A7+A8+A9+A10)%11;  //Fórmula para verificação do primeiro digito.


    if (V1<2)
    {                                  //Condições para definição do primeiro digito verificador:
        V1=0;                          //Caso o quociente da divisão por 11 for menor que 2, o digito verificador é 0.
    } else                             //Caso contrário, devemos subtrair 11 do valor do quociente,
    {                                  //o resultado desta subtração será o primeiro digito verificador.
        V1=(11-V1);
    }


 A10=(cpfIN/100000000)*11;
 A9=((cpfIN/10000000)%10)*10;
 A8=((cpfIN/1000000)%10)*9;
 A7=((cpfIN/100000)%10)*8;
 A6=((cpfIN/10000)%10)*7;              //Método para separar novamente os algarismos do CPF,
 A5=((cpfIN/1000)%10)*6;               //porém, sendo multiplicados por outros valores para podermos definir o segundo dígito verificador.
 A4=((cpfIN/100)%10)*5;                //O "V1", já definido, precisa ser utilizado na fórmula do segundo dígito verificador.
 A3=((cpfIN/10)%10)*4;
 A2=(cpfIN%10)*3;
 V1=(V1*2);
 V2=(A2+A3+A4+A5+A6+A7+A8+A9+A10+V1)%11;//Fórmula para verificação do primeiro digito.


    if (V2<2)
    {                                    //Condições para definição do segundo digito verificador:
        V2=0;                            //Caso o quociente da divisão por 11 for menor que 2, o digito verificador é 0.
    } else                               //Caso contrário, devemos subtrair 11 do valor do quociente,
    {                                    //o resultado desta subtração será o segundo digito verificador.
        V2=(11-V2);
    }

 A10=A10/11;
 A9=A9/10;
 A8=A8/9;
 A7=A7/8;
 A6=A6/7;              //Método para separar novamente os algarismos do CPF,
 A5=A5/6;               //porém, sendo divididos pelos mesmos valores utilizados anteriormente para podermos definir o segundo dígito verificador.
 A4=A4/5;
 A3=A3/4;
 A2=A2/3;
 V1=V1/2;


    cout<<"Aqui está o seu CPF com os dígitos verificadores: \n"<<A10<<A9<<A8<<A7<<A6<<A5<<A4<<A3<<A2<<V1<<V2;//Apresentação do CPF para o usuário.


//=========================================================================================================================================
//A partir desta linha, foi programado um conteúdo adicional para que haja uma interação de maior qualidade do algorítmo com o usuário.
//=========================================================================================================================================


    cout<<"\nO CPF está com os digitos verificadores corretos? Digite 's' ou 'n' e aperte a tecla Enter:\n";
    cin>>C1;


    if (C1=='s')
    {
    cout<<"\nMuito obrigado por utilizar nosso gerador/verificador de dígitos do CPF!";
    } else if (C1=='n')
    {
    cout<<"Por favor, verifique os números inseridos e reinicie o programa.";
    } else//Else para caso algo diferente do ´s´ ou ´n´ seja digitado.
    {
    cout<<"\nDesculpe, não entendi, digite apenas 's' ou 'n'.\nPara prosseguir, reinicie o programa.\n";
    }


return 0;
}
