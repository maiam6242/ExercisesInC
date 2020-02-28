#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "trout/util.h"
#include "minunit.h"

int tests_run = 0;


char *icmpcode_v4(int code)
{
  switch (code) {
    case  0: return("network unreachable");
    case  1: return("host unreachable");
    case  2: return("protocol unreachable");
    case  3: return("port unreachable");
    case  4: return("fragmentation required but DF bit set");
    case  5: return("source route failed");
    case  6: return("destination network unknown");
    case  7: return("destination host unknown");
    case  8: return("source host isolated (obsolete)");
    case  9: return("destination network administratively prohibited");
    case 10: return("destination host administratively prohibited");
    case 11: return("network unreachable for TOS");
    case 12: return("host unreachable for TOS");
    case 13: return("communication administratively prohibited by filtering");
    case 14: return("host recedence violation");
    case 15: return("precedence cutoff in effect");
    default: return("[unknown code]");
  }
}

static char *test1(){
    char* res = icmpcode_v4(3);
    char *message = "test1 failed: impcode_v4(\"3\") should return port unreachable";
    mu_assert(message,strcmp(res, "port unreachable") == 0);
    return NULL;
}

static char *test2(){
    char* res = icmpcode_v4(92);
    char *message = "test1 failed: impcode_v4(\"92\") should return [unknown code]";
    mu_assert(message,strcmp(res, "[unknown code]") == 0);
    return NULL;
    
}

static char *test3(){
    double x = 8.7;
    char* res = icmpcode_v4(x);
    char *message = "test1 failed: impcode_v4(\"x\") should return source host isolated (obsolete)";
    mu_assert(message,strcmp(res, "source host isolated (obsolete)") == 0);
    return NULL;
}

static char * all_tests() {
    mu_run_test(test1);
    mu_run_test(test2);
    mu_run_test(test3);
    return NULL;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != NULL) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}

