#include "dfs.h"

DFS::DFS(QList<Package>* dest_package, QList<Courier> courier):
    dest_package(dest_package)
{
    for(int i=0;i<courier.size();i++)
        this->courier.push_back(courier[i]);
    qDebug();
}

DFS::~DFS()
{
}


void DFS::handle()
{
    ret.clear();
    int courier_index = 0;
    for(int i=0;i<dest_size;i++){
        if(Map[0][i] != -1){
            dfs(i,Map[0][i],courier[courier_index].id);
            courier_index++;
        }
    }
}

void DFS::dfs(int son, float dis,QString courier_id)
{
    for(int i=0;i<dest_package[son].size();i++){
        ret.push_back(Task(dest_package[son][i].id,courier_id,dest_package[son][i].cos_name,son,dis));
    }
    for(int i=0;i<dest_size;i++){
        if(Map[son][i] != -1){
            dfs(i,dis+Map[son][i],courier_id);
        }
    }
}
