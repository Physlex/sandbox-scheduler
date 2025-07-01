## Targets and rules for the Scheduler.

SCHEDULER=scheduler

SCHEDULER_CPP_SRC=$(wildcard src/scheduler/*.cpp)
SCHEDULER_CPP_OBJS=$(addprefix $(PROJECT_BUILD_PATH)/, $(SCHEDULER_CPP_SRC:.cpp=.o))


### RULES ################################################################################

$(SCHEDULER_CPP_OBJS): $(PROJECT_BUILD_PATH)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo 'Compiling dependency $< for $@'
	$(GPP) $(CFLAGS) -c $< -o $@ $(PROJECT_INCLUDES)
	@echo 'Compilation complete!'
	@echo ' '

$(PROJECT_LIB_PATH)/lib$(SCHEDULER).a: $(SCHEDULER_CPP_OBJS) | $(PROJECT_LIB_PATH)
	@echo 'Archiving $@'
	$(AR) $(ARFLAGS) $@ $(SCHEDULER_CPP_OBJS)
	@echo '$@ Archived!'
	@echo ' '


### TARGETS ##############################################################################

$(SCHEDULER): lib$(SCHEDULER).a

lib$(SCHEDULER).a: $(PROJECT_LIB_PATH)/lib$(SCHEDULER).a
