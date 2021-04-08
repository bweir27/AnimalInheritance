animaltest: Main.o Animal.o Dog.o Duck.o Cat.o
	g++ Main.o Animal.o Dog.o Duck.o Cat.o -o animaltest

Main.o: Main.cc Animal.o Dog.o Duck.o Cat.o
	g++ Main.cc -std=c++11 -c

Animal.o: Animal.cc Animal.h
	g++ Animal.cc -std=c++11 -c

Dog.o: Dog.cc Dog.cc Animal.h
	g++ Dog.cc -c

Duck.o: Duck.cc Duck.h Animal.h
	g++ Duck.cc -c

Cat.o: Cat.cc Cat.h Animal.h
	g++ Cat.cc -c

clean:
	rm *.o
