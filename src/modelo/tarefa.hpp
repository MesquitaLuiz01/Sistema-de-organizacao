#ifndef TAREFA_HPP
#define TAREFA_HPP

#include <string>

struct Tarefa{
        int id=0;
        std::string titulo;
        std::string descricao;
        bool concluida=false;
        std::string data_criacao;
        std::string data_limite;
        enum class prioridade{baixa, media, alta};
};

#endif //TAREFA_HPP