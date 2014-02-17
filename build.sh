#!/bin/sh
cd src
./boost_python_gen.py textcomponent.h
cd ..
premake4 gmake
make
