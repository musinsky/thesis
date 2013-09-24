# 2013-09-24

NAME		= musinsky_abstract

FILES		= musinsky_abstract.tex abstract_title.tex \
		  abstract_general.tex abstract_outline.tex \
		  musinsky_references.bib musinsky_abstract.orig.pdf
DIRS		= figures
ALLFILES	= $(FILES) $(DIRS)
DISTSRCNAME	= $(NAME)_$(shell date +%F).tar.gz

# targets
all:	pdf

pdf:	$(NAME).tex
	latexmk -pdf $(NAME)

distsrc:
	@rm -f $(DISTSRCNAME);
	@tar --ignore-failed-read -czvf $(DISTSRCNAME) $(ALLFILES) Makefile;
	@echo -e "\n$(DISTSRCNAME) done\n"

clean:
	latexmk -C -bibtex
