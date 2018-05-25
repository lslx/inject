/*
 *
 */
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dlfcn.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/select.h>
#include <string.h>
#include <termios.h>
#include <pthread.h>
#include <sys/epoll.h>
#include <android/log.h>
#include <sys/mman.h>
#include <jni.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/ptrace.h>

#define __obf__
#include "MyLog.h"



__attribute__((constructor))
static void setup_hook_libc() {
    LOGT("setup_hook_libc, by _init, may be blocked!!!");

}

/*
int hook_entry(char * a){
    LOGT("Inject success:%s\n", a);  

    setup_hook_libc();

    return 0;
} 
*/