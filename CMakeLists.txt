cmake_minimum_required(VERSION 2.8.3)
project(QueryBySingingHumming)

## Declare a C++ executable
add_executable(SBuildModel src/SDHBuildModel/SBuildModel.cpp src/SDHBuildModel/midifile.c)

add_library(SDFuzzySearch src/SDFuzzySearch/SDFuzzySearch.cpp src/SDFuzzySearch/SFrameMatch.cpp src/SDFuzzySearch/SNoteMatch.cpp src/SDFuzzySearch/SSearchCommon.cpp)

set (CMAKE_CXX_STANDARD 11)

add_executable(SDHumming src/SDHumming/SDSP.cpp src/SDHumming/SMelody.cpp src/SDHumming/SModel.cpp src/SDHumming/STester.cpp src/SDHumming/SUtil.cpp src/SDHumming/AudioFile.cpp)

target_link_libraries(SDHumming SDFuzzySearch)

set (CMAKE_CXX_STANDARD 11)

add_executable(Test src/AudioFile/Test.cpp src/AudioFile/AudioFile.cpp)

