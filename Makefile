CC = gcc
AR = ar
FLAGS= -Wall -g
all: loops.a recursives.a recursived.so loopd.so maindloop maindrec mains

mains: main.o libclassrec.a 
	$(CC) $(FLAGS) -o mains main.o libclassrec.a  -lm

maindloop: main.o libclassloops.so 
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so 
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm
recursives.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
loops.a: basicClassification.o advancedClassificationLoop.o 
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
recursived.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o -lm

loopd.so: basicClassification.o advancedClassificationLoop.o
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o -lm


main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c -lm

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c -lm 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm

.PHONY: clean all
clean:
	rm -f *.o *.a *.so mains maindloop maindrec
