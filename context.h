#ifndef CONTEXT_H
#define CONTEXT_H
#include "strategy.h"
#include "worker.h"


class Context
{
private:
    Strategy* strategy_;
public:
    Context(Strategy* strategy = nullptr) : strategy_(strategy){};
    ~Context();
    void set_strategy(Strategy* strategy);
    vector<worker> show_if(const vector<worker>& workers, double x) const;
};
#endif // CONTEXT_H
