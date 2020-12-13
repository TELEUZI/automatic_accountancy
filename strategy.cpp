#include "strategy.h"


vector<worker> StrategySalaryHigher::ConcreateShowAlgorithm(const vector<worker> workers, double x) const {
    vector<worker> result;
    copy_if(workers.begin(), workers.end(), back_inserter(result), [&x](const worker& p1) {
        return (p1.get_salary() >= x); }
    );
    return result;
}


vector<worker> StrategySalaryLower::ConcreateShowAlgorithm(const vector<worker> workers, double x) const{
    vector<worker> result;
    copy_if(workers.begin(), workers.end(), back_inserter(result), [&x](const worker& p1) {
        return (p1.get_salary() <= x);}
    );
    return result;
}
