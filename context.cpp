#include "context.h"


Context::~Context()
{
    delete this->strategy_;
}

void Context::set_strategy(Strategy* strategy)
{
    delete this->strategy_;
    this->strategy_ = strategy;
}

vector<worker> Context::show_if(const vector<worker> &workers, double x) const
{
    vector<worker> result;
    result = this->strategy_->ConcreateShowAlgorithm(workers, x);
    return result;
}
