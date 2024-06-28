cmake_minimum_required(VERSION 3.22)
set(BOARD esp32c3_luatos_core)

find_package(Zephyr)
project(helloworldblinky)

target_sources(app PRIVATE src/main.c)
