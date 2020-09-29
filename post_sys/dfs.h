#ifndef DFS_H
#define DFS_H

#include "globla.h"

class DFS
{
public:
    QList<Task>ret;
    QList<Package> *dest_package;
    QList<Courier> courier;
    DFS(QList<Package>*dest_package,QList<Courier>courier);
    ~DFS();
    void handle();
    void dfs(int son,float dis,QString courier_id);
};

#endif // DFS_H
