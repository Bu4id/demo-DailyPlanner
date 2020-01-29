#include "DataBase.h"

void DataBase::changeData(std::string query){
    rc = sqlite3_open("test.db", &db);
    if(rc){
        std::cout << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
    }
    rc = sqlite3_exec(db, query.c_str(), 0, 0, &error);
    if( rc != SQLITE_OK ){
        std::cout << "Splite3 error: " << error << std::endl;
        sqlite3_free(error);
    }
    sqlite3_close(db);
}

void DataBase::receiveData(std::string query, std::string** &records){
    int i = 0;
    rc = sqlite3_open("test.db", &db);
    if(rc){
        std::cout << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
    }
    rc = sqlite3_prepare_v2(db, query.c_str(),-1, &stmt, NULL);
    if(rc != SQLITE_OK)
    {
        std::cout << "Splite3 error: " << sqlite3_errmsg(db) << std::endl;
    }
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        i++;
    }
    arrayInitialization(records,i,2);
    i = 0;
    while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
        int recordId = sqlite3_column_int(stmt,0);
        const char* record = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        records[i][0]=std::to_string(recordId);
        records[i][1]=std::string(record);
        i++;
    }
    numberOfRecords = i;
    sqlite3_finalize(stmt);
    sqlite3_close(db);
}