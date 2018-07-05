#ifndef _HDR_HYPERBUILD_RULE_C0
#define _HDR_HYPERBUILD_RULE_C0

#include "../../ext/nicehash/set/int32.h"

static nh_set_int32_t hb_r_c0_set;

void hb_r_c0_add_elems(nh_set_int32_t set) {
  for (char c = 0x0; c <= 0x1F; c++) {
    nh_set_int32_add(set, c);
  }
}

void hb_r_c0_init(void) {
  hb_r_c0_set = nh_set_int32_create();
  hb_r_c0_add_elems(hb_r_c0_set);
}

int hb_r_c0_check(char c) {
  return nh_set_int32_has(hb_r_c0_set, c);
}

#endif // _HDR_HYPERBUILD_RULE_C0
