CXXFLAGS = -g -Wall
CXX = g++
OBJS = $(TARGET).o cadena.o alfabeto.o simbolo.o tools.o
TARGET = cya-P02-Strings

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o p02_strings

$(TARGET).o : $(TARGET).cc
	@$(CXX) -c $(CXXFLAGS) $(TARGET).cc

cadena.o : cadena.cc cadena.h
	@$(CXX) -c $(CXXFLAGS) cadena.cc

alfabeto.o : alfabeto.cc alfabeto.h
	@$(CXX) -c $(CXXFLAGS) alfabeto.cc

simbolo.o : simbolo.cc simbolo.h
	@$(CXX) -c $(CXXFLAGS) simbolo.cc

tools.o : tools.cc tools.h
	@$(CXX) -c $(CXXFLAGS) tools.cc

.PHONY: clean
clean:
	rm -f *.o $(TARGET)