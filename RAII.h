#pragma once
#ifndef M2_LAB5_RAII_H
#define M2_LAB5_RAII_H
#include <iostream>
#include"TNotCopyable.h"

class RAII {

    TNotCopyable* pP ;
public:
    ~RAII()
    {
        pP->Close();
        std::cout << "\nExit. All successfully closed." << std::endl;
    }

    RAII()
    {
        pP = nullptr;
    }

    RAII(TNotCopyable* _pp)
    {
        pP = _pp;
    }

};
#endif //M2_LAB5_RAII_H
