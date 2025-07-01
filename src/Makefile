# Rules and targets for scheduler application wrapper.

APP_CPP_SRC:=$(wildcard src/*.cpp)
APP_CPP_OBJS:=$(addprefix $(PROJECT_BUILD_PATH)/, $(APP_CPP_SRC:.cpp=.o))
APP_LIBS=-lscheduler
APP_LIB_NAMES:=$(patsubst -l%, %, $(APP_LIBS))

### RULES ################################################################################

$(APP_CPP_OBJS): $(PROJECT_BUILD_PATH)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo 'Compiling dependency $< for $@'
	$(GPP) $(CFLAGS) -c $< -o $@ $(PROJECT_INCLUDES)
	@echo 'Compilation complete!'
	@echo ' '


$(PROJECT_BIN_PATH)/$(PROJECT_NAME): $(APP_CPP_OBJS) $(APP_LIB_NAMES) | $(PROJECT_BIN_PATH)
	@echo 'Compiling dependency $< for $@'
	$(GPP) $(LDFLAGS) -o $@ $(APP_CPP_OBJS) $(APP_LIBS) $(PROJECT_INCLUDES)
	@echo 'Compilation complete!'
	@echo ''


### TARGETS ##############################################################################

$(PROJECT_NAME): $(PROJECT_BIN_PATH)/$(PROJECT_NAME)

-include src/scheduler/Makefile
