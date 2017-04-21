#ifndef ALBERT_CHIB_H_
#define ALBERT_CHIB_H_

#include "GLMMethod.h"

namespace jags {
namespace glm {

    /**
     * @Short Albert and Chib sampler for binary GLMs
     *
     * Sampler for probit models with binary outcomes using the
     * auxiliary variable algorithm described by Albert, J. and Chib,
     * S. (1993). Bayesian analysis of binary and polychotomous
     * response data. Journal of the American Statistical Association,
     * 88:669-679.
     *
     * The algorithm is extended to logistic regression models by
     * considering a latent auxiliary variable with a logistic
     * distribution as a scale mixture of normals. This extension was
     * proposed by Holmes C and Held L (2006).  Bayesian Auxiliary
     * Variables Models for Binary and Multinomial Regression,
     * Bayesian Analysis, 1:148-168.
     *
     * A second algorithm for binary logistic models is implemented
     * in the class HolmesHeld.
     */
    class AlbertChib : public GLMMethod {
	bool _gibbs; //Do we update parameters individually?
    public:
	/**
	 * Constructor.
	 * 
	 * @param gibbs Should the update method use Gibbs sampling?
	 * See GLMMethod#updateLMGibbs
	 *
	 * @see GLMMethod#GLMMethod
	 */
	AlbertChib(GraphView const *view, 
		   std::vector<SingletonGraphView const *> const &sub_views,
		   std::vector<Outcome *> const &outcomes,
		   unsigned int chain, bool gibbs);
	/**
	 * The update takes place in two steps. First the auxiliary
	 * variables provided by the Outcome class are updated.  Then
	 * the parameters of the model are updated by calling either
	 * GLMMethod#updateLM or GLMMethod#updateLMGibbs. The latter
	 * is used if the parameter "gibbs" was set to true in the
	 * constructor.
	 */
	void update(RNG *rng);
    };
    
}}

#endif /* ALBERT_CHIB_H_ */
