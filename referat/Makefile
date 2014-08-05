# 2013-07-23

NAME		= referat

FILES		= referat.tex part1.tex part2.tex \
		  referat.orig.pdf
DIRS		= pictures
ALLFILES	= $(FILES) $(DIRS)
DISTSRCNAME	= $(NAME)_$(shell date +%F).tar.gz

# targets
all:	pdf

pdf:	$(NAME).tex
	latexmk -pdf $(NAME)

distsrc:
	@rm -f $(DISTSRCNAME);
	@tar --ignore-failed-read -czvf $(DISTSRCNAME) $(ALLFILES) \
	  Makefile README.md;
	@echo -e "\n$(DISTSRCNAME) done\n"

clean:
	latexmk -C
