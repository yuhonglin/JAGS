#ifndef ERROR_H
#define ERROR_H

#include <string>

namespace jags {

class Node;
class Distribution;
class Function;

void throwRuntimeError(std::string const &message);
void throwLogicError(std::string const &message);
void throwNodeError(Node const *node, std::string const &message);
void throwDistError(Distribution const *dist, std::string const &message);
void throwFuncError(Function const *func, std::string const &message);

} /* namespace jags */

#endif /* ERROR_H */
