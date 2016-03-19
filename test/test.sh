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

if [ ! -d "test/moulitest" ]; then
	echo -ne "$INFO""Fetching moulitest "$END
	git clone https://github.com/yyang42/moulitest.git test/moulitest --quiet
	if [ $? -ne 0 ]; then
		echo -e "$NOK"NOK$END
		exit 1
	else
		echo -e "$OK"OK$END
	fi
fi

echo -e "$INFO"Tesing with moulitest$END
echo "LIBFT_PATH = $PWD" > test/moulitest/config.ini
cp include/libft.h ./
cd test
make -C moulitest libft_part2 > result.log 2>&1 || cat result.log
rm ../libft.h

if [ $? -ne 0 ]; then
	exit 1
fi

RESULT=$(cat result.log | grep ">>>>" | grep spec | grep -v "Ok !")
if [ -z "$RESULT" ]; then
	echo -e "$OK"MOULITEST OK$END
	exit 0
else
	echo -e "$NOK"MOULITEST NOK$END
	echo -e $RESULT
	exit 1
fi
