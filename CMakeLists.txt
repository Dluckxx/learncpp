cmake_minimum_required(VERSION 3.16)
project(learncpp)

set(CMAKE_CXX_STANDARD 11)

file (GLOB files src/*.cpp)
foreach (file ${files})
string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
add_executable (${exe} ${file})
message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()