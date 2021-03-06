#ifndef DSAMPLE_H_
#define DSAMPLE_H_

#include <distribution/VectorDist.h>

struct RNG;

namespace jags {
    namespace bugs {

	/**
	 * <pre> X[] ~ dsample(p[], K) </pre> 
	 *
	 * Sample K elements without replacement using a vector of
	 * probability weights p. Sampled values have indicator
	 * 1. Non-sampled values have indicator 0.
	 *
	 * For sampling with replacement see DMulti.
	 *
	 * @short Sample without replacement
	 */
	class DSample : public VectorDist {
	public:
	    DSample();
	    
	    double logDensity(double const *x, unsigned int length,
			      PDFType type, 
			      std::vector<double const *> const &parameters,
			      std::vector<unsigned int> const &lengths,
			      double const *lower, double const *upper) const;
	    void randomSample(double *x, unsigned int length,
			      std::vector<double const *> const &parameters,
			      std::vector<unsigned int> const &lengths,
			      double const *lower, double const *upper,
			      RNG *rng) const;
	    void typicalValue(double *x, unsigned int length,
			      std::vector<double const *> const &par,
			      std::vector<unsigned int> const &lengths,
			      double const *lower, double const *upper) const;
	    bool checkParameterValue(std::vector<double const *> const &par,
				     std::vector<unsigned int> const &lengths)
		const;
	    bool checkParameterLength(std::vector<unsigned int> const &lengths)
		const;
	    bool checkParameterDiscrete(std::vector<bool> const &mask) const;
	    unsigned int length(std::vector<unsigned int> const &lengths) const;
	    void support(double *lower, double *upper, unsigned int length,
			 std::vector<double const *> const &parameters,
			 std::vector<unsigned int> const &lengths) const;
	    bool isSupportFixed(std::vector<bool> const &fixmask) const;
	    unsigned int df(std::vector<unsigned int> const &lengths) const;
	    bool isDiscreteValued(std::vector<bool> const &mask) const;
	};
	
    }
}

#endif /* DSAMPLE_H_ */
