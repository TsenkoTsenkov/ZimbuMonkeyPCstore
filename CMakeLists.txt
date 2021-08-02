# CMakeLists.txt

cmake_minimum_required(VERSION 3.16)
project(Homework DESCRIPTION "Summer Homework for Introduction to programming" VERSION 0.0.1)

message("Finding 3d-party Catch2 library")
find_package(Catch2 CONFIG REQUIRED)

message("Creating target for test of Property&ComponentClasses")
add_executable(run_Property&ComponentTests src/Property.cpp src/Component.cpp tests/Property&ComponentTest.cpp )
target_compile_features(run_Property&Component PUBLIC cxx_std_17)
target_link_libraries(run_Property&Component PRIVATE Catch2::Catch2)

enable_testing()
add_test(RegistrationTests run_BitComparisonTests)
message("Build successfully")