#!/bin/bash

aclocal
autoconf --force
automake --add-missing --copy --foreign --force-missing
./configure
make
