COMPILER  = clang++
CFLAGS    = -g -MMD -MP -std=c++20 -Wall -Wextra -Winit-self -Wno-missing-field-initializers
LDFLAGS   = -lncurses
LIBS      =
INCLUDE   = -I./include
TARGET    = ./bin/$(shell basename `pwd`)
SRCDIR    = ./source
SOURCES   = $(wildcard $(SRCDIR)/*.cc)
OBJDIR    = ./obj
OBJECTS   = $(addprefix $(OBJDIR)/, $(notdir $(SOURCES:.cc=.o)))
DEPENDS   = $(OBJECTS:.o=.d)

$(TARGET): $(OBJECTS) $(LIBS)
	$(COMPILER) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
	-mkdir -p $(OBJDIR)
	$(COMPILER) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: clean $(TARGET)

clean:
	-rm -f $(OBJECTS) $(DEPENDS) $(TARGET)

-include $(DEPENDS)

