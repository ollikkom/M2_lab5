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
        if(pP != nullptr)
            pP->Close();
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
