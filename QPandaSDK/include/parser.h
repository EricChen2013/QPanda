#pragma once

#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <sstream>


enum QGATE
{
    HADAMARD_GATE =1,
    RX_GATE,
    RY_GATE,
    RZ_GATE,
    NOT_GATE,
    TOFFOLI_GATE,
    ISWAP_GATE,
    SQISWAP_GATE,
    CNOT_GATE,
    MEASURE_GATE

};
/*
#define HADAMARD_GATE           1
#define RX_GATE                 2
#define RY_GATE                 3
#define RZ_GATE                 4
#define NOT_GATE                5
#define TOFFOLI_GATE            6
#define ISWAP_GATE              7
//#define CPHASE_GATE             8
#define SQISWAP_GATE            9
#define CNOT_GATE               10
//#define DAGGER_GATE             11
//#define CONTROL_GATE            12
#define MEASURE_GATE            13
  */
using std::string;

struct Type
{
    string sId;   
    double dDouble;
    int iGateName;
    int iInteger;
};


#define YYSTYPE Type
