CC 			=	gcc
CFLAGS 		=	-Wall -Wextra -std=c11

# VPATH		=	src:./functions
vpath			%.c	./functions

SRCS 		= 	$(wildcard ./functions/s21_*.c)
OBJF		=	$(SRCS:%.c=objf/%.o)
DEPENDS		=	$(OBJF:%.o=%.d)

MYLIB		=	s21_matrix.a

all:$(MYLIB)

# -include $(DEPENDS)

clean:
	rm *.o

$(MYLIB): $(OBJF)
	ar rc $(MYLIB) $(OBJF)
	ranlib $(MYLIB)

objf/%.o: %.c
	@mkdir -p objf
	$(CC) -MMD -o ./objf -c $(CFLAGS)
