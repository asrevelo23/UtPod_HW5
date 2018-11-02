final: utPod_driver.o UtPod.o Song.o
	g++ -otest  utPod_driver.o UtPod.o Song.o
driver: utPod_driver.cpp UtPod.h Song.h
	g++ -c utPod_driver.cpp
UtPod.o: UtPod.cpp UtPod.h Song.h
	g++ -c UtPod.cpp
song.o: Song.cpp Song.h
	g++ -c Song.cpp