#SUBDIRS = $(shell find -maxdepth 1 -type d | sed s:\./:: | sed 's/^\.$$//' )

SUBDIRS=bin1 simplelib basiclib bin2 combo

all:
	for a in $(SUBDIRS);do make -C $$a;done
install:
	for a in $(SUBDIRS);do make -C $$a install;done
uninstall:
	for a in $(SUBDIRS);do make -C $$a uninstall;done
clean:
	for a in $(SUBDIRS);do make -C $$a clean;done
