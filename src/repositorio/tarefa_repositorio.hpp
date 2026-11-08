#ifndef TAREFA_REPOSITORIO_H
#define TAREFA_REPOSITORIO_H

class tarefa_base{
        public:
            virtual void criar() = 0;
            virtual void atualizar() = 0;
            virtual void deletar() = 0;
            virtual void buscar () = 0;
};

#endif // TAREFA_REPOSITORIO_H