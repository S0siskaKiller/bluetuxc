SCRIPT = bluetux
INSTALL_PATH = /usr/bin

install:
	gcc bluetuxc.c -o bluetux
	install -m 755 $(SCRIPT) $(INSTALL_PATH)
uninstall:
	rm -f $(INSTALL_PATH)/$(SCRIPT)
