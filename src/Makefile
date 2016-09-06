# ------------------------------------------------------------------------------
# Generic Makefile for SynphonyC compiler
# ---------------------------------------
#
# The user must create its own Makefile which sould have at least the following 
# fields:
#
#
#
# ------------------------------------------------------------------------------
APPLIC = storeSomeRecords
CC      = gcc
CPP     = g++
CFLAGS  = -Wall -g -fPIC
INCLUDE = -I../include
LDFLAGS = -lm -lboost_serialization
SCC_C   = NamedObject Student University storeSomeRecords

tt:
	@echo "Makefile exec"

# determine the C files from the SCC install
CFILES  :=$(foreach file, $(SCC_C), $(file).cpp)
OBJ     :=$(foreach file, $(SCC_C), $(file).o)

# determine the project CPP files
CPPOBJ  :=$(foreach file, $(CPPBASE), $(file).o)

# determine the project C files
COBJ  :=$(foreach file, $(CBASE), $(file).o)


%.o: %.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -o $@ -c $<

%.o: %.c 
	$(CC) -g $(CFLAGS) -o $@ -c $<

$(APPLIC): $(OBJ) $(CPPOBJ) $(COBJ)
	echo $(CFILES)
	$(CPP) -g -o $@ $ $^ $(LDFLAGS)


all: tt $(CFILES) $(APPLIC)

clean:
	$(RM) $(OBJ) $(COBJ) $(CPPOBJ)
	$(RM) $(APPLIC)
