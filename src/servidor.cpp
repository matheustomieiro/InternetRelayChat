#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "socket_utils.h"

using namespace std;

int main(int argc, char *argv[]){
	char buffer[4096] = {0};
	conexao_servidor Conexao;
    Conexao.cria_conexao();
	//Esperando conexao com cliente
    while(true){
        Conexao.recebe_envios();
        printf("%s\n",Conexao.get_mensagem());
        if(buffer[0] != 0) Conexao.limpa_mensagem();
	}
}