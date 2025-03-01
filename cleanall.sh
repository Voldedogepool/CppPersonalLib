#!/bin/sh
echo "CLEANING DEBUG ... STARTED ..."
cd build/Debug && cmake --build . --target clean && cd ../..
echo "CLEANING DEBUG ... FINISHED"
echo "CLEANING RELEASE ... STARTED ..."
cd build/Release && cmake --build . --target clean && cd ../..
echo "CLEANING RELEASE ... FINISHED"
