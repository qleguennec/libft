#!/bin/bash

RM=(.travis.yml .git util test)

for DIR in ${RM[@]}; do
	rm -rf $DIR > /dev/null 2>&1
done

exit 0
