* Packages needed for TeX Live
 * packages from CTAN
 ```
 tlmgr install babel-russian hyphen-russian cyrillic t2 lh
 tlmgr install wrapfig maybemath feynmf feynmp-auto metapost
 tlmgr install textcase times txfonts   # for disser + PSCyr
 ```
 * PSCyr
 ```
 export DEST_DIR=`kpsewhich -expand-var='$TEXMFHOME'`   # user
 export DEST_DIR=`kpsewhich -expand-var='$TEXMFLOCAL'`  # admin
 wget ftp://scon155.phys.msu.su/pub/russian/psfonts/0.4d-beta/PSCyr-0.4-beta9-tex.tar.gz
 wget ftp://scon155.phys.msu.su/pub/russian/psfonts/0.4d-beta/PSCyr-0.4-beta9-type1.tar.gz
 tar -xzf PSCyr-0.4-beta9-type1.tar.gz
 tar -xzf PSCyr-0.4-beta9-tex.tar.gz
 
 mkdir -p $DEST_DIR/fonts/{afm,tfm,type1,vf}/public/pscyr
 mkdir -p $DEST_DIR/fonts/{enc,map}/dvips/pscyr
 mkdir -p $DEST_DIR/fonts/map/dvipdfm/pscyr
 mkdir -p $DEST_DIR/tex/latex/pscyr
 mkdir -p $DEST_DIR/doc/fonts/pscyr
 
 mv PSCyr/fonts/afm/public/pscyr/*   $DEST_DIR/fonts/afm/public/pscyr
 mv PSCyr/fonts/tfm/public/pscyr/*   $DEST_DIR/fonts/tfm/public/pscyr
 mv PSCyr/fonts/type1/public/pscyr/* $DEST_DIR/fonts/type1/public/pscyr
 mv PSCyr/fonts/vf/public/pscyr/*    $DEST_DIR/fonts/vf/public/pscyr
 mv PSCyr/dvips/pscyr/*.enc       $DEST_DIR/fonts/enc/dvips/pscyr
 mv PSCyr/dvips/pscyr/*.map       $DEST_DIR/fonts/map/dvips/pscyr
 mv PSCyr/dvipdfm/base/*.map      $DEST_DIR/fonts/map/dvipdfm/pscyr
 mv PSCyr/tex/latex/pscyr/*    $DEST_DIR/tex/latex/pscyr
 
 # documentation
 mv PSCyr/ChangeLog        $DEST_DIR/doc/fonts/pscyr
 mv PSCyr/LICENSE          $DEST_DIR/doc/fonts/pscyr
 mv PSCyr/manifest.txt     $DEST_DIR/doc/fonts/pscyr
 mv PSCyr/doc/PROBLEMS     $DEST_DIR/doc/fonts/pscyr
 mv PSCyr/doc/fonts-ex.tex $DEST_DIR/doc/fonts/pscyr
 iconv -f KOI8-R -t UTF8 < PSCyr/doc/README.koi > $DEST_DIR/doc/fonts/pscyr/README.utf8
 
 mktexlsr $DEST_DIR   # user
 updmap --enable Map=pscyr.map
 
 mktexlsr             # admin
 updmap-sys --enable Map=pscyr.map
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
