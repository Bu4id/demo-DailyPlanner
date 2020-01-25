#include "array.h"

void arrayInitialization(std::string** array,int rowСount,int columnCount){
    array = new std::string* [rowCount];
    for (int i = 0; i < rowCount; i++){
        array[i] = new std::string[columnCount];//values ​​for id, record text and status
    }
}

void arrayСleaning(std::string** array,int rowСount){
    for (int i = 0; i < rowСount; i++) {
        delete [] array[i];
    }
    delete [] array;
}
