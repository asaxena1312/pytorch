#pragma once

#include <ATen/Context.h>
#include <ATen/native/transformers/sdp_utils_cpp.h>

namespace sdp {

bool check_for_seq_len_1_nested_tensor(sdp_params params, bool debug);
SDPBackend select_sdp_backend(sdp_params kernel_params);
bool can_use_flash_attention(sdp_params params, bool debug);
bool can_use_mem_efficient_attention(sdp_params params, bool debug);

} // namespace sdp
