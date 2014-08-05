* Packages needed for TeX Live
 * PSCyr
 * packages from CTAN
 ```
 tlmgr install babel-russian hyphen-russian cyrillic t2 lh
 tlmgr install wrapfig maybemath feynmf feynmp-auto metapost
 tlmgr install textcase times txfonts   # for disser + PSCyr
 ```
 * [disser-1.1.4](http://sourceforge.net/projects/disser/) (version from the end of 2009)
 ```
 export DESTDIR=`kpsewhich -expand-var='$TEXMFHOME'`    # user
 export DESTDIR=`kpsewhich -expand-var='$TEXMFLOCAL'`   # admin
 wget http://downloads.sourceforge.net/project/disser/disser/1.1.4/disser-1.1.4.zip
 unzip disser-1.1.4.zip
 cd disser-1.1.4
 make
 make install
 
 mktexlsr $DESTDIR   # user
 mktexlsr            # admin
 ```
