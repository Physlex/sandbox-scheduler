## Root project structure and definitions for the rest of the project.

### PROJECT ##############################################################################

PROJECT_NAME=scheduler-project

PROJECT_BUILD_PATH=build
PROJECT_BIN_PATH=$(PROJECT_BUILD_PATH)/bin
PROJECT_LIB_PATH=$(PROJECT_BUILD_PATH)/lib
PROJECT_CONFIG_PATH=config
PROJECT_DOCS_PATH=docs

GPP=g++
CFLAGS=-Wall -std=c++11 -Werror -O0
LDFLAGS=

AR=ar
ARFLAGS=rcs

PROJECT_INCLUDES=-Iinc/ -Lbuild/lib


### RULES ################################################################################

$(PROJECT_BUILD_PATH):
	@mkdir -p $(PROJECT_BUILD_PATH)


$(PROJECT_BIN_PATH):
	@mkdir -p $(PROJECT_BIN_PATH)


$(PROJECT_LIB_PATH):
	@mkdir -p $(PROJECT_LIB_PATH)


$(PROJECT_CONFIG_PATH):
	@mkdir -p $(PROJECT_CONFIG_PATH)


### TARGETS ##############################################################################

all: $(PROJECT_NAME)


clean:
	@rm -rf $(PROJECT_BIN_PATH)/*
	@rm -rf $(PROJECT_LIB_PATH)/*
	@rm -rf $(PROJECT_BUILD_PATH)/src


.PHONY: all clean help


-include src/Makefile
