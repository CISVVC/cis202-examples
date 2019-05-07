all: main

array_util.o : array_util.cpp
	g++ -c array_util.cpp

merge_sort.o : merge_sort.cpp
	g++ -c merge_sort.cpp

main : array_util.o merge_sort.o main.cpp
	g++ -o main array_util.o merge_sort.o main.cpp

run :  main
	@ echo "Running main"
	@./main
	@ echo "main ended"

debug:
	gdb ./main

clean :
	@rm *.o  main
