#ifndef TAREFA_REPOSITORIO_H
#define TAREFA_REPOSITORIO_H

class tarefa_base{
        public:
            virtual void criar() = 0;
            virtual void atualizar() = 0;
            virtual void deletar() = 0;
            virtual void buscar () = 0;
};

class tarefa_repositorio: public tarefa_base {
        private:
                sqlite3 *db = nullptr;
        public:
                tarefa_repositorio()=default;

                ~tarefa_repositorio(){
                        fechar();
                }

                void fechar();

                void criar () override;
                void atualizar() override;
                void deletar() override;
                void buscar() override;
                bool conectar();

};

#endif // TAREFA_REPOSITORIO_H