#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include "array.h"
#include "../Librarys/sqlite3/sqlite3.h"

class DataBase{
    public:
        int receiveData(std::string query, std::string** records);
        int changeData(std::string query);
    private:
        sqlite3_stmt *stmt;
        sqlite3 *db;
        char *error = 0;
        int rc;
        int recordId;
        int record;
};
#endif

