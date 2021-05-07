// Autogenerated file by gen-common-ops.py. Do not edit directly!
#pragma once

#include <ATen/Tensor.h>
#include <torch/extension.h>


namespace torch_ipex {

class AtenIpexTypeExt {
 public:
  static at::Tensor ROIAlign_forward(const at::Tensor& input,
                                     const at::Tensor& rois,
                                     const double spatial_scale,
                                     const int64_t pooled_height,
                                     const int64_t pooled_width,
                                     const int64_t sampling_ratio);

  static at::Tensor ROIAlign_backward(const at::Tensor& grad,
                                      const at::Tensor& rois,
                                      const double spatial_scale,
                                      const int64_t pooled_height,
                                      const int64_t pooled_width,
                                      const int64_t batch_size,
                                      const int64_t channels,
                                      const int64_t height,
                                      const int64_t width,
                                      const int64_t sampling_ratio);
    
  static at::Tensor nms(const at::Tensor& dets,
                        const at::Tensor& scores,
                        const double threshold);

  static std::tuple<at::Tensor, at::Tensor, at::Tensor> batch_score_nms(const at::Tensor& dets,
                        const at::Tensor& scores,
                        const double threshold);

  static at::Tensor interaction_forward(const std::vector<at::Tensor> & input);
  static std::vector<at::Tensor> interaction_backward(const at::Tensor & grad_out, 
                                                                     const std::vector<at::Tensor> & input);

  static at::Tensor embedding_bag(
      const at::Tensor &weight,
      const at::Tensor &indices,
      const at::Tensor &offsets,
      bool sparse,
      bool include_last_offset);

  static bool embedding_bag_fast_path_sum(
      const at::Tensor weight, 
      const c10::optional<at::Tensor> per_sample_weights, 
      int64_t mode, 
      const c10::optional<int64_t> padding_idx);

};

}  // namespace torch_ipex

// namespace {
// static auto dispatch =
//     torch::RegisterOperators()
//         // .op("torch_ipex::embedding_bag", &torch_ipex::AtenIpexTypeExt::embedding_bag)
//         .op("torch_ipex::interaction_forward", &torch_ipex::AtenIpexTypeExt::interaction_forward)
//         .op("torch_ipex::interaction_backward", &torch_ipex::AtenIpexTypeExt::interaction_backward);
// }
