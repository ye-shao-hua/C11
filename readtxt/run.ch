#!/bin/bash
i=1
while((i<=48))
  do
./bin/a.out ./etc/BEM_INPUT_${i}_386073.txt>>log
echo " ">>log
i=`expr $i + 1`
done
