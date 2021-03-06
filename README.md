# My modified version of JAGS

This is my own modification of JAGS.

## Tasks

### Simiplifications
- [ ] Remove internal R support
- [ ] Remove terminal support
- [ ] Remove windows support
- [ ] Remove dynamic module

### Changes
- [ ] Change the builder system to CMake

### New functionalities
- [ ] Add ```load``` option
- [ ] Add ```block``` keyword to declare updating blocks in model specification
- [ ] Add internal multi-thread support
- [ ] Add model caching
- [ ] Add output format hdf5
- [ ] Add ```dlm``` module
- [ ] Add R support (compatible with rjags and coda)
- [ ] Add python support


## Copyright

The code is mainly based on the JAGS project by Martyn Plummer which again depends on
many open source libraries. Copying the JAGS' "AUTHORS" file,

```
The library JRmath is a version of the R math library from R version
2.10.1., copyright (C), 1998-2000 Ross Ihaka, Robert Gentleman, The
R Core Development Team, The R Foundation, and Morten Welinder (see
individual source files for details).  Part of the R math library is
also found in the file src/lib/rng/RmathRNG.cc

The random number generators in the base module:
- src/modules/base/rngs/MarsagliaRNG.cc
- src/modules/base/rngs/MersenneTwiseterRNG.cc
- src/modules/base/rngs/SuperDuperRNG.cc
- src/modules/base/rngs/WichmannHillRNG.cc
contain random number generators from the main R library which are 
Copyright (C) 1998 Ross Ihaka 2000-2009 and The R Core Development Team.
The implementation of the Mersenne Twister generator is Copyright (C)
1997, 1999 Makoto Matsumo and Takuji Nishimura.

The lecuyer module is adapted from code Copyright (C) Pierre L'Ecuyer 2001.

The glm module contains a complete copy of the CSparse library,
Copyright (C) Timothy A. Davis, 2006-2009, and the CHOLMOD library,
Copyright (C) 2004-2009. Some portions of CHOLMOD are Copyright (C)
Univ. of Florida. Others are Copyright (C) by their authors
(T. A. Davis and W. Hager).

The file LGMix.cc in the glm module contains code to approximate the
negative log-gamma distribution by a mixture of normals, originally
written by Rudolf Fruewirth and taken from the GMRFLib library by
Havard Rue.
```

## License
GNU General Public License version 2