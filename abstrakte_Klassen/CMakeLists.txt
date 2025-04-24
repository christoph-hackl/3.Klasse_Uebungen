cmake_minimum_required(VERSION 3.28)
project(abstrakte_Klassen)

set(CMAKE_CXX_STANDARD 23)

add_executable(abstrakte_Klassen main.cpp
        Angestellter.cpp
        Angestellter.h
        Vorstandsmitglied.cpp
        Vorstandsmitglied.h
        Projektleiter.cpp
        Projektleiter.h)
