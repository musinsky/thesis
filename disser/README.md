* packages needed from from CTAN
```
tlmgr install babel-russian hyphen-russian cyrillic t2 lh
tlmgr install wrapfig maybemath feynmf feynmp-auto metapost
tlmgr install textcase times txfonts   # for disser + PSCyr
```
* [PSCyr](https://github.com/musinsky/config/tree/master/TeXLive/PSCyr)
* disser-1.1.4  
needed [disser](https://sourceforge.net/projects/disser/) version 1.1.4 (from the end of 2009 year), don't install disser from CTAN  
exported shell variable must be `DESTDIR`
```
export DESTDIR=`kpsewhich -expand-var='$TEXMFLOCAL'`   # as admin
export DESTDIR=`kpsewhich -expand-var='$TEXMFHOME'`    # or as user

wget https://raw.githubusercontent.com/musinsky/thesis/master/disser/disser-1.1.4.zip
unzip disser-1.1.4.zip
cd disser-1.1.4
make
make install

mktexlsr            # as admin
mktexlsr $DESTDIR   # or as user
```
