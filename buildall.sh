#!/bin/sh
echo "BUILDING DEBUG ... STARTED ..."
cd build/Debug && cmake --build . && make && cd ../..
echo "BUILDING DEBUG ... FINISHED"
echo "BUILDING RELEASE ... STARTED ..."
cd build/Release && cmake --build . && make && cd ../..
echo "BUILDING RELEASE ... FINISHED"
