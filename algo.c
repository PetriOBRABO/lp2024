#include <stdio.h> // standard input output (biblioteca de comandos relacionados a entrada de dados ou impressao na tela)
#include <stdlib.h> //padrao para comandos matematicos

int main() {  //demarca onde comeca o programa
    printf("Prestou!\nPetri é brabo dms\n");
    printf("Clodoaldo e cria dms!\n")
    return EXIT_SUCCESS; //retorno do resultado da aplicacao para o sistema(return 0 = EXIT_SUCESS;)
} //gcc no terminal = e o compilador em c
//traco o significa output
//terminal foi escrito: gcc algo.c -o algo(compilador)
//o arquivo gerado algo nao e visualizavel pois e binario
//xxd -b algo.c ve o binario do codigo
//objdump -D algo para ver os comandos no processador no codigo
//para executar = ./nomedoprograma

//sempre que for alterar o programa: chamar o gcc para compilar e depois executar ./nomedocodigo