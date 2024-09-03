cmake_minimum_required(VERSION 3.27)
project(proiectfinaloop)

set(CMAKE_CXX_STANDARD 17)

add_executable(proiectfinaloop main.cpp
        Repository/Repo.cpp
        Repository/Repo.h
        Controller/Controller.cpp
        Controller/Controller.h
        UI/UI.cpp
        UI/UI.h
        Domain/Domain.h
        Tests/tests.cpp
        Tests/tests.h)
