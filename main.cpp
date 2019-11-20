#include <iostream>
#define MAX 150
#define TAM 5
#include <cstring>
#include <stdlib.h>//biblioteca para poder utilizar o comando pra limpar a tela
using namespace std;

struct Traducao{
    char ingles[MAX];
    char portugues[MAX];

};

void traduzPalavra(char palavra[], Traducao a[] ){
    int cont=0;
   
    for(int j=0;j<TAM;j++){
   
    if(strcmp(palavra,a[j].portugues)==0){
        cout << "A palavra " << palavra << " esta em portugues e a sua traducao eh " << a[j].ingles << endl;
        cont++;
    }else if(strcmp(palavra,a[j].ingles)==0){
        cout << "A palavra " << palavra << " esta em ingles e a sua traducao eh " << a[j].portugues << endl;
        cont++;
    }
    }

    if(cont==0){
        cout << "------------------------------------------------"<< endl;
        cout << "Palavra nao cadastrada!!" << endl;
    }
}

int main(){
    bool sair;
   
    Traducao a[TAM];
    char palavra[MAX];
    int opcao;
    int i=0;


    do{

    cout << "------------------------------------------------"<< endl;
    cout << "------------------------------------------------"<< endl;
    cout << "-------------Bem-vindo ao auge-tradutor---------"<< endl;
    cout << "------------------------------------------------"<< endl;
    cout <<"1. Cadastrar palavra"<< endl;
    cout <<"2. Traduzir palavra" << endl;
    cout <<"3. Sair do programa" << endl;
    cout <<"4. Sobre o programa" << endl;
    cout << "------------------------------------------------"<< endl;
    cout << "-----Desenvolvido por Emelyn Freire-------------"<< endl;
    cout << "------------------------------------------------"<< endl;
    cout << "Digite o numero correspondente: ";
    cin >> opcao;
    cin.ignore();
    system("cls");

    switch(opcao){
        case 1:

            cout << "------------------------------------------------"<< endl;
            cout << "---------------CADASTRAR PALAVRA----------------"<< endl;
            cout << "------------------------------------------------"<< endl;
            cout << "------------------------------------------------"<< endl;

            while(i<TAM){
                cout << "Digite a palavra em ingles para cadastro:"<<endl;
                cin.getline(a[i].ingles,MAX);

                cout << "Digite sua traducao:"<<endl;
                cin.getline(a[i].portugues, MAX);
                i++;
                cout << "------------------------------------------------"<< endl;
                cout << "Deseja continuar o cadastro?[s/n]" << endl;
                cout << "------------------------------------------------"<< endl;
                char resposta;
                cin>>resposta;
                cin.ignore();
                system("cls");
                if(resposta=='n' || resposta=='N'){
                 cout << "Cadastro encerrada com sucesso!!" << endl;
                    break;
                }
            }
            break;
        case 2:
            cout << "------------------------------------------------"<< endl;
            cout << "---------------TRADUZIR PALAVRA-----------------"<< endl;
            cout << "------------------------------------------------"<< endl;
            cout << "Para sair digite 'encerrar agora'---------------"<<endl;
            cout << "------------------------------------------------"<< endl;


            cout << "Digite a palavra que deseja traduzir:" << endl;
            cin.getline(palavra,MAX);
            while(strcmp(palavra,"encerrar agora")!=0){
               
                traduzPalavra(palavra,a);
                cout << "------------------------------------------------"<< endl;
                cout << "Digite a palavra que deseja traduzir:" << endl;
                cin.getline(palavra,MAX);
            }
            system("cls");
            cout << "Traducao encerrada com sucesso!!" << endl;

            break;
        case 3:
            break;
        case 4:
            cout << "------------------------------------------------"<< endl;
            cout << "---------------Sobre o programa----------------"<< endl;
            cout << "------------------------------------------------"<< endl;
            cout << "------------------------------------------------"<< endl;
            cout << "Desenvolvido por: Emelyn Freire"<< endl;
            cout << "Data: 20/11/2019"<<endl;
            cout << "Github: https://github.com/emelynfreire"<<endl;
            cout << endl;
            cout << "Digite 's' para sair" <<endl;
            char op;
            cin>>op;
            if(op=='s'||op=='S'){
                    break;
            }
            while(op!='s'||op!='S'){
                cin >>op;
                if(op=='s'||op=='S'){
                    break;
                }
            }
            break;
        default:
            cout << "opcao invalida!!"<< endl;
            break;

    }
    system("cls");
    cout << "------------------------------------------------"<< endl;
    cout << "---Deseja sair do programa?[1-sim/0-nao]--------" << endl;
    cout << "------------------------------------------------"<< endl;
    cin >> sair;
    system("cls");
    }while(sair==false);//se for 0=0 verdadeiro e vai rodar tudo de novo
   
    return 0;
}
