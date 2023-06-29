//C�digo feito pelos alunos:
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
    char C1; //"cpfIN" ser� utilizado para armazenar o CPF completo.
             //"A2" at� "A10" s�o algorismos categorizados de acordo com os pesos que ir�o receber.
             //"V1" e "V2" s�o os digitos a serem calculados.


    cout << "Bem vindo ao gerador/verificador de digitos do CPF!\nPor favor, insira o CPF sem os digitos verificadores, pontos ou h�fens e pressione Enter: \n";
             //Introdu��o cordial para o c�digo.
    cin >> cpfIN;
             //Input para armazenar o cpf a ser gerado ou verificado.


A10=(cpfIN/100000000)*10;
 A9=((cpfIN/10000000)%10)*9;
 A8=((cpfIN/1000000)%10)*8;
 A7=((cpfIN/100000)%10)*7;            //M�todo para separar cada algorismo do CPF,
 A6=((cpfIN/10000)%10)*6;             //podendo utiliz�-los separadamente
 A5=((cpfIN/1000)%10)*5;              //e atribuir seus devidos pesos.
 A4=((cpfIN/100)%10)*4;
 A3=((cpfIN/10)%10)*3;
 A2=(cpfIN%10)*2;
 V1=(A2+A3+A4+A5+A6+A7+A8+A9+A10)%11;  //F�rmula para verifica��o do primeiro digito.


    if (V1<2)
    {                                  //Condi��es para defini��o do primeiro digito verificador:
        V1=0;                          //Caso o quociente da divis�o por 11 for menor que 2, o digito verificador � 0.
    } else                             //Caso contr�rio, devemos subtrair 11 do valor do quociente,
    {                                  //o resultado desta subtra��o ser� o primeiro digito verificador.
        V1=(11-V1);
    }


 A10=(cpfIN/100000000)*11;
 A9=((cpfIN/10000000)%10)*10;
 A8=((cpfIN/1000000)%10)*9;
 A7=((cpfIN/100000)%10)*8;
 A6=((cpfIN/10000)%10)*7;              //M�todo para separar novamente os algarismos do CPF,
 A5=((cpfIN/1000)%10)*6;               //por�m, sendo multiplicados por outros valores para podermos definir o segundo d�gito verificador.
 A4=((cpfIN/100)%10)*5;                //O "V1", j� definido, precisa ser utilizado na f�rmula do segundo d�gito verificador.
 A3=((cpfIN/10)%10)*4;
 A2=(cpfIN%10)*3;
 V1=(V1*2);
 V2=(A2+A3+A4+A5+A6+A7+A8+A9+A10+V1)%11;//F�rmula para verifica��o do primeiro digito.


    if (V2<2)
    {                                    //Condi��es para defini��o do segundo digito verificador:
        V2=0;                            //Caso o quociente da divis�o por 11 for menor que 2, o digito verificador � 0.
    } else                               //Caso contr�rio, devemos subtrair 11 do valor do quociente,
    {                                    //o resultado desta subtra��o ser� o segundo digito verificador.
        V2=(11-V2);
    }

 A10=A10/11;
 A9=A9/10;
 A8=A8/9;
 A7=A7/8;
 A6=A6/7;              //M�todo para separar novamente os algarismos do CPF,
 A5=A5/6;               //por�m, sendo divididos pelos mesmos valores utilizados anteriormente para podermos definir o segundo d�gito verificador.
 A4=A4/5;
 A3=A3/4;
 A2=A2/3;
 V1=V1/2;


    cout<<"Aqui est� o seu CPF com os d�gitos verificadores: \n"<<A10<<A9<<A8<<A7<<A6<<A5<<A4<<A3<<A2<<V1<<V2;//Apresenta��o do CPF para o usu�rio.


//=========================================================================================================================================
//A partir desta linha, foi programado um conte�do adicional para que haja uma intera��o de maior qualidade do algor�tmo com o usu�rio.
//=========================================================================================================================================


    cout<<"\nO CPF est� com os digitos verificadores corretos? Digite 's' ou 'n' e aperte a tecla Enter:\n";
    cin>>C1;


    if (C1=='s')
    {
    cout<<"\nMuito obrigado por utilizar nosso gerador/verificador de d�gitos do CPF!";
    } else if (C1=='n')
    {
    cout<<"Por favor, verifique os n�meros inseridos e reinicie o programa.";
    } else//Else para caso algo diferente do �s� ou �n� seja digitado.
    {
    cout<<"\nDesculpe, n�o entendi, digite apenas 's' ou 'n'.\nPara prosseguir, reinicie o programa.\n";
    }


return 0;
}
