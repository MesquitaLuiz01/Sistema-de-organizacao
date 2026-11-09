#include <sqlite3.h>
#include "tarefa_repositorio.hpp"

void tarefa_repositorio::fechar(){
    if(db != nullptr){
        sqlite3_close(db);
        db = nullptr;
    }
}

bool tarefa_repositorio::conectar(){
    if(db!=nullptr){
        fechar();
    }

    int rc = sqlite3_open("tarefas.db", &db);

    if(rc!=SQLITE_OK){
        fechar();
        return false;
    }
    return true;
}

void tarefa_repositorio::criar(){
    // Implementação do método criar
}

void tarefa_repositorio::atualizar(){
    // Implementação do método atualizar
}

void tarefa_repositorio::deletar(){
    // Implementação do método deletar
}

void tarefa_repositorio::buscar(){
    // Implementação do método buscar
}