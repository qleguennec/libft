#!/bin/bash

BLACK="\033[0;30m"
RED="\033[0;31m"
GREEN="\033[0;32m"
YELLOW="\033[1;33m"
BLUE="\033[0;34m"
MAGENTA="\033[0;35m"
CYAN="\033[0;36m"
WHITE="\033[0;37m"
END="\033[0m"

OK=$GREEN
NOK=$RED
INFO=$CYAN

echo -e $BLUE"Displaying functions used"$END
make re
BUILDDIR=$(make -s get-BUILDDIR)

function show {
	echo "Functions used in $1:"
	nm $1 | awk '{printf $NF; printf " "}'
	echo
}

export -f show
find $BUILDDIR -maxdepth 1 -type f -name "*.o" -exec bash -c "show {}" \;
