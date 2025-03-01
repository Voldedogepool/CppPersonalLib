#!/bin/sh
echo "REMOVE BUILD FOLDER"
rm -rf build
echo "CREATE BUILD FOLDERS"
mkdir build
mkdir build/Debug
mkdir build/Release
echo "RUNNING CMAKE DEBUG"
cd build/Debug && cmake -DCMAKE_BUILD_TYPE=Debug ../.. && cd ../../
echo "RUNNING CMAKE RELEASE"
cd build/Release && cmake -DCMAKE_BUILD_TYPE=Release ../.. && cd ../../
echo "REMOVE SYMBOLIC LINK COMPILE COMMANDS JSON FILE"
rm compile_commands.json
echo "CREATING SYMBOLIC LINK COMPILE COMMANDS JSON FILE"
ln -s build/Debug/compile_commands.json ./
echo "SETUP FINISHED"
