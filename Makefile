all: src/* src/headers/*
	g++ src/color.cpp src/main.cpp src/point.cpp src/line.cpp -lGL -lGLU -lX11 -lglut
