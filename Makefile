shellcheck : shellnocheck.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<
