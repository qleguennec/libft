#!/bin/bash

RM=(.travis.yml .git util test)

for DIR in ${RM[@]}; do
	rm -rf $DIR
done
