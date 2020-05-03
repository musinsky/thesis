# 2020-05-03

NAME		= diplomka

FILES		= diplomka.tex blabla.tex uvod.tex plazma.tex wa94.tex \
		  k0.tex alfa.tex accept.tex vysledky.tex literatu.tex \
		  diplomka.orig.ps
DIRS		= fig pic
ALLFILES	= $(DIRS) $(FILES)
DISTSRCNAME	= diplomka_$(shell date +%F).tar.gz

# targets
all:	ps

ps:	$(NAME).tex
	latexmk -ps $(NAME)

pdf:	$(NAME).tex
	latexmk -pdfps $(NAME)

distsrc:
	@rm -f $(DISTSRCNAME);
	@tar --ignore-failed-read -czvf $(DISTSRCNAME) $(ALLFILES) \
	  Makefile README.md;
	@echo -e "\n$(DISTSRCNAME) done\n"

clean:
	latexmk -C
