# Taken from https://github.com/bast/gtest-demo
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(googletest-download NONE)

include(ExternalProject)

ExternalProject_Add(
        googletest
        SOURCE_DIR "C:/Users/clari/Documents/HEIG/BA4/GEN/Labos/heig-GEN-labo5-test/cmake-build-debug/googletest/googletest-src"
        BINARY_DIR "C:/Users/clari/Documents/HEIG/BA4/GEN/Labos/heig-GEN-labo5-test/cmake-build-debug/googletest/googletest-build"
        GIT_REPOSITORY
        https://github.com/google/googletest.git
        GIT_TAG
        release-1.8.0
        CONFIGURE_COMMAND ""
        BUILD_COMMAND ""
        INSTALL_COMMAND ""
        TEST_COMMAND ""
)
