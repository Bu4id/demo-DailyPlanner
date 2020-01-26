#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include "array.h"
#include <sqlite3.h>

class DataBase{
    public:
        void receiveData(std::string query, std::string** records);
        void changeData(std::string query);
    private:
        sqlite3_stmt *stmt;
        sqlite3 *db;
        char *error = 0;
        int rc;
        int recordId;
        int record;
};
#endif

