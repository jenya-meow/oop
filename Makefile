all: src/* src/headers/*
	g++ src/color.cpp src/main.cpp src/point.cpp src/line.cpp src/tringl.cpp src/circl.cpp -lGL -lGLU -lX11 -lglut
