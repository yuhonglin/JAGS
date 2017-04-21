#ifndef LINEAR_FACTORY_H_
#define LINEAR_FACTORY_H_

#include "GLMFactory.h"

namespace jags {
namespace glm {

    /**
     * @short Factory object for conjugate linear model sampling method
     */
    class LinearFactory : public GLMFactory
    {
    public:
	LinearFactory();
	/**
	 * Checks that the outcome is from the normal family with identity
	 * link
	 */
	bool checkOutcome(StochasticNode const *snode) const;
	/**
	 * Returns a newly allocated object of class Linear
	 */
	GLMMethod *newMethod(GraphView const *view, 
			     std::vector<SingletonGraphView const *> const &sub_views,
			     unsigned int chain) const;
	/**
	 * Checks that the candidate node is not bounded. This is
	 * required for block-updating from the joint multivariate
	 * normal posterior.
	 */
	bool canSample(StochasticNode const *snode) const;
    };

}}

#endif /* LINEAR_FACTORY_H_ */
