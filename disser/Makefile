# 2013-07-23

NAME		= musinsky_disser

FILES		= musinsky_disser.tex disser_title.tex disser_intro.tex \
		  chapter1.tex chapter2.tex chapter3.tex chapter4.tex \
		  disser_conclusion.tex references.bib \
		  musinsky_disser.orig.pdf
DIRS		= figures1 figures2 figures3 figures4 tables
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
	@rm -f ppn_fmf.*
