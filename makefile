#Its a make file!

#Default, with debugging symbols
debug: clean program.o encryption2.o decryption.o
	@g++ program.o encryption2.o decryption.o -o encryption 

#Without debugging
production: clean program.o encryption2.o decryption.o
	@g++ program.o encryption2.o decryption.o -o encryption -s

#Making encryption2.o
game.o: encryption2.cpp encryption2.h
	@g++ -Wall -c encryption2.cpp -ggdb

#Making decryption.o
menus.o: decryption.cpp decryption.h
	@g++ -Wall -c decryption.cpp -ggdb

#Making program.o
data.o: program.cpp program.h
	@g++ -Wall -c program.cpp -ggdb

#Deleting the old executable and object files
clean:
	@rm -f *.o encryption
