#ifndef _HDR_HYPERBUILD_RULE_FORMATTINGTAGS
#define _HDR_HYPERBUILD_RULE_FORMATTINGTAGS

#include "../../ext/nicehash/set/str.h"

static nh_set_str_t hb_r_formattingtags_set;

void hb_r_formattingtags_init(void) {
  hb_r_formattingtags_set = nh_set_str_create();
  nh_set_str_add(hb_r_formattingtags_set, "a");
  nh_set_str_add(hb_r_formattingtags_set, "abbr");
  nh_set_str_add(hb_r_formattingtags_set, "b");
  nh_set_str_add(hb_r_formattingtags_set, "bdi");
  nh_set_str_add(hb_r_formattingtags_set, "bdo");
  nh_set_str_add(hb_r_formattingtags_set, "br");
  nh_set_str_add(hb_r_formattingtags_set, "cite");
  nh_set_str_add(hb_r_formattingtags_set, "code");
  nh_set_str_add(hb_r_formattingtags_set, "data");
  nh_set_str_add(hb_r_formattingtags_set, "dfn");
  nh_set_str_add(hb_r_formattingtags_set, "em");
  nh_set_str_add(hb_r_formattingtags_set, "i");
  nh_set_str_add(hb_r_formattingtags_set, "kbd");
  nh_set_str_add(hb_r_formattingtags_set, "mark");
  nh_set_str_add(hb_r_formattingtags_set, "q");
  nh_set_str_add(hb_r_formattingtags_set, "rp");
  nh_set_str_add(hb_r_formattingtags_set, "rt");
  nh_set_str_add(hb_r_formattingtags_set, "rtc");
  nh_set_str_add(hb_r_formattingtags_set, "ruby");
  nh_set_str_add(hb_r_formattingtags_set, "s");
  nh_set_str_add(hb_r_formattingtags_set, "samp");
  nh_set_str_add(hb_r_formattingtags_set, "small");
  nh_set_str_add(hb_r_formattingtags_set, "span");
  nh_set_str_add(hb_r_formattingtags_set, "strong");
  nh_set_str_add(hb_r_formattingtags_set, "sub");
  nh_set_str_add(hb_r_formattingtags_set, "sup");
  nh_set_str_add(hb_r_formattingtags_set, "time");
  nh_set_str_add(hb_r_formattingtags_set, "tt");
  nh_set_str_add(hb_r_formattingtags_set, "u");
  nh_set_str_add(hb_r_formattingtags_set, "var");
  nh_set_str_add(hb_r_formattingtags_set, "wbr");
}

int hb_r_formattingtags_check(char *tag) {
  return nh_set_str_has(hb_r_formattingtags_set, tag);
}

#endif // _HDR_HYPERBUILD_RULE_FORMATTINGTAGS
