#include <config.h>

#include "AMMethod.h"
#include "Outcome.h"

using std::vector;
using std::string;

namespace jags {
namespace glm {

    AMMethod::AMMethod(GraphView const *view,
		       vector<SingletonGraphView const *> const &sub_views,
		       vector<Outcome *> const &outcomes,
		       unsigned int chain)
	: GLMMethod(view, sub_views, outcomes, chain, true)
    {}

    void AMMethod::update(RNG *rng)
    {
	/*
          Note that we must update the auxiliary variables *before*
          calling updateLM. This ordering is important for models with
          a variable design matrix (e.g. measurement error models).
	*/
	
        for (vector<Outcome*>::const_iterator p = _outcomes.begin();
             p != _outcomes.end(); ++p)
        {
            (*p)->update(rng);
	}

	//FIXME: Why not allow Gibbs sampling?
	updateLM(rng);
    }

}}
    
