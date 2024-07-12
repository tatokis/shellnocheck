#include <stdio.h>
#include <getopt.h>

static const struct option long_opts[] = {
    {"version", no_argument, 0, 'V'},
    {NULL, 0, 0, 0}
};

int main(int argc, char** argv)
{
    int ret;
    opterr = 0;
    while((ret = getopt_long(argc, argv, "V", long_opts, NULL)) != -1)
    {
        if(ret == 'V') {
            fputs("ShellCheck - shell script analysis tool\nversion: 0.8.0\nlicense: GNU General Public License, version 3\nwebsite: https://www.shellcheck.net\n", stdout);
            return 0;
        }
    }
    return 0;
}
