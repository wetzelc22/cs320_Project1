



all: always.o driver.o Bimodal.o
	g++ Bimodal.o always.o driver.o -o driver
Bimodal.o: Bimodal.cpp Bimodal.h
	g++ -c Bimodal.cpp -o Bimodal.o
driver.o: driver.cpp always.h
	g++ -c driver.cpp -o driver.o
always.o: always.cpp always.h
	g++ -c always.cpp -o always.o
driver: always.o driver.o Bimodal.o
	g++ Bimodal.o always.o driver.o -o driver
run: driver
	./driver test_input.txt
clean: 
	rm *.o driver
memcheck: driver
	valgrind ./driver	
