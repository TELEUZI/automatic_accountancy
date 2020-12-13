#ifndef STRATEGY_H
#define STRATEGY_H
#include "worker.h"


class Strategy
{
public:
    virtual ~Strategy() {}
    virtual vector <worker> ConcreateShowAlgorithm(const vector<worker> workers, double x) const = 0;
};



class StrategySalaryHigher : public Strategy
{
public:
    vector<worker> ConcreateShowAlgorithm(const vector<worker> workers, double x) const override;
};


class StrategySalaryLower : public Strategy
{
public:
    vector<worker> ConcreateShowAlgorithm(const vector<worker> workers, double x) const override;
};
#endif
