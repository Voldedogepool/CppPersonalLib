#!/bin/sh
echo "LAUNCHING TESTS ...STARTED ..."
cd ./build/bin/Test/Release/ 
./TestAll
cd ../../../../
echo "LAUNCHING TESTS ...FINISHED"
