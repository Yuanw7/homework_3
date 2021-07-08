define todo_lib
 for lib in $$LIBS; do \
  echo -e "\t[$$BASE/$$lib] $$lib (checking work to be done)"; \
  ./sbin/compilation/helper.sh -n -t lib$$LAB$$lib -d $$BASE/$$lib -N $(MAKEFLAGS) -g $@  -- $(xcpp) $$ADF;\
 done
endef
define todo_driver
 echo -e "\t[$$BASE] $$X2DO (checking work to be done)";\
 ./sbin/compilation/helper.sh -n -t $$X2DO -d $$BASE -N $(MAKEFLAGS) -g $@  -- $(xcpp) $$ADF
endef

