#include <config.h>

#include "Linear.h"
#include <graph/StochasticNode.h>
#include <sampler/SingletonGraphView.h>

using std::vector;
using std::string;

namespace jags {
namespace glm {

    Linear::Linear(GraphView const *view, 
		   vector<SingletonGraphView const *> const &sub_views,
		   vector<Outcome*> const &outcomes,
		   unsigned int chain, bool gibbs)
	: GLMMethod(view, sub_views, outcomes, chain, false), _gibbs(gibbs)
    {
    }

    double Linear::getPrecision(unsigned int i) const 
    {
	return _view->stochasticChildren()[i]->parents()[1]->value(_chain)[0];
    }

    double Linear::getValue(unsigned int i) const 
    {
	return _view->stochasticChildren()[i]->value(_chain)[0];
    }
    
    void Linear::update(RNG *rng)
    {
	if (_gibbs) 
	    updateLMGibbs(rng);
	else
	    updateLM(rng);
    }

}}
