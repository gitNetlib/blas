####################################################################
#  BLAS make include file.                                         #
#  March 2007                                                      #
####################################################################
#
SHELL = /bin/sh
#
#  The machine (platform) identifier to append to the library names
#
PLAT = _MacOS
#  
#  Modify the FORTRAN and OPTS definitions to refer to the
#  compiler and desired compiler options for your machine.  NOOPT
#  refers to the compiler options desired when NO OPTIMIZATION is
#  selected.  Define LOADER and LOADOPTS to refer to the loader and 
#  desired load options for your machine.
#
FORTRAN  = gfortran
OPTS     = -Ofast -march=native -fomit-frame-pointer -funroll-loops -ffast-math -fno-signed-zeros -ffp-contract=fast -mmmx -msse -flto -maes -march=native  -shared 
DRVOPTS  = $(OPTS) $CFLAGS  $MATHFLAGS  
NOOPT    =
LOADER   = gfortran
LOADOPTS =
#
#  The archiver and the flag(s) to use when building archive (library)
#  If you system has no ranlib, set RANLIB = echo.
#
ARCH     = ar
ARCHFLAGS= cr
RANLIB   = ranlib
#
#  The location and name of the Reference BLAS library.
#
BLASLIB      = blas$(PLAT).a
