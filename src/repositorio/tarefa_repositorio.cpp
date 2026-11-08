#include <sqlite3.h>
#include "tarefa_repositorio.hpp"



class tarefa_repositorio : public tarefa_base {
        private:
                sqlite3 *db = nullptr;
        public:
                
                tarefa_repositorio()=default;

                ~tarefa_repositorio(){
                        fechar();
                }

                void fechar(){
                    if(db != nullptr){
                        sqlite3_close(db);
                        db = nullptr;
                    }
                }

                
                bool conectar(){
                    if(db!=nullptr){
                        fechar();
                    }

                    int rc = sqlite3_open("tarefas.db", &db);

                    if(rc!=SQLITE_OK){
                        fechar();
                        return false;
                    }
                    return true;
                };
};