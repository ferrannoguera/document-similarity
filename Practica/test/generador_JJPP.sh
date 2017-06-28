#./bin/bash

echo "g++ -std=c++11 -o gen_proves gen_proves.cpp"
g++ -std=c++11 -o gen_proves gen_proves.cpp
echo "./gen_proves < lorem"
 ./gen_proves < lorem
#echo "cleaning"
