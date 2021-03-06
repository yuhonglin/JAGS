#ifndef SUM_DIST_H_
#define SUM_DIST_H_

#include <distribution/VectorDist.h>

namespace jags {
namespace bugs {

/**
 * @short Sum of 2 or more random variables
 */
class SumDist : public VectorDist {
public:
    SumDist();

    double logDensity(double const *x, unsigned int length, PDFType type,
		      std::vector<double const *> const &parameters,
		      std::vector<unsigned int> const &lengths,
		      double const *lower, double const *upper) const;
    void randomSample(double *x, unsigned int length,
		      std::vector<double const *> const &parameters,
		      std::vector<unsigned int> const &lengths,
		      double const *lower, double const *upper,
		      RNG *rng) const;
    void typicalValue(double *x, unsigned int length,
		      std::vector<double const *> const &parameters,
		      std::vector<unsigned int> const &lengths,
		      double const *lower, double const *upper) const;
    bool isSupportFixed(std::vector<bool> const &fixmask) const;
    bool isDiscreteValued(std::vector<bool> const &mask) const;
    unsigned int df(std::vector<unsigned int> const &lengths) const;
    bool checkParameterValue(std::vector<double const *> const &params,
			     std::vector<unsigned int> const &lengths) const;
    bool checkParameterLength(std::vector<unsigned int> const &lengths) const;
    bool checkParameterDiscrete(std::vector<bool> const &mask) const;
    void support(double *lower, double *upper, unsigned int length,
		 std::vector<double const *> const &parameters,
		 std::vector<unsigned int> const &lengths) const;
    unsigned int length(std::vector <unsigned int> const &lengths) const;
};

}}

#endif /* SUM_DIST_H_ */
