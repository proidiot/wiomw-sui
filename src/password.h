#ifndef OPENWRT_SUI_PASSWORD_H
#define OPENWRT_SUI_PASSWORD_H

#include <stdbool.h>
#include <yajl/yajl_tree.h>

void post_password(yajl_val top);

bool valid_creds(yajl_val top);

#endif
