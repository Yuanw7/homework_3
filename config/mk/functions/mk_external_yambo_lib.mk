define mk_external_yambo_lib
 for ldir in $$LIBS2DO; do \
  if test ! -f "$(libdir)/lib$NAME$$ldir.a" ; then \
   echo " " ; \
   echo ">>>[Making lib/yambo/$$ldir]<<<" ; \
   if test ! -d "$$DIR2GO/$$ldir" ; then mkdir -p "$$DIR2GO/$$ldir" ; fi ; \
   if [ "$(topdir)" != "$(prefix)" ] && [ -f $$VPATH/$$ldir/.objects ] ; then \
    cp $$VPATH/$$ldir/.objects $$DIR2GO/$$ldir ; \
   fi ; \
   ./sbin/compilation/helper.sh -d $$DIR2GO/$$ldir -t lib$$NAME$$ldir.a -o .objects -m l -- "$(precision) $(xcpp) $$ADF" ; \
   cd $$DIR2GO/$$ldir ; $(MAKE) VPATH=$$VPATH/$$ldir || exit "$$?" ; cd ../../../../../; \
  fi \
 done
endef
