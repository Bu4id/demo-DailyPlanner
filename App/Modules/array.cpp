#include "array.h"

void arrayInitialization(std::string** &array,int rowCount,int columnCount){
    array = new std::string* [rowCount];
    for (int i = 0; i < rowCount; i++){
        array[i] = new std::string[columnCount];//values ​​for id, record text and status
    }
}

void arrayCleaning(std::string** &array,int rowCount){
    for (int i = 0; i < rowCount; i++) {
        delete [] array[i];
    }
    delete [] array;
}
