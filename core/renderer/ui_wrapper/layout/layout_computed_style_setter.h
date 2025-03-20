// Copyright 2025 The Lynx Authors. All rights reserved.
// Licensed under the Apache License Version 2.0 that can be found in the
// LICENSE file in the root directory of this source tree.
#ifndef CORE_RENDERER_UI_WRAPPER_LAYOUT_LAYOUT_COMPUTED_STYLE_SETTER_H_
#define CORE_RENDERER_UI_WRAPPER_LAYOUT_LAYOUT_COMPUTED_STYLE_SETTER_H_

#include <array>
#include <cstdint>

#include "core/renderer/css/css_style_utils.h"
#include "core/renderer/css/css_value.h"
#include "core/renderer/css/measure_context.h"
#include "core/renderer/starlight/style/data_ref.h"
#include "core/renderer/starlight/style/layout_computed_style.h"
#include "core/style/css_property_id.h"

namespace lynx {
namespace tasm {

struct LayoutComputedStyleSetter {
  // style setter by CSSValue
#define SET_WITH_CSS_VALUE(name, css_name, default_value)                      \
  static bool Set##name(const tasm::CSSValue& value, const bool reset = false, \
                        const CssMeasureContext& measure_context,              \
                        const tasm::CSSParserConfigs& parser_configs_,         \
                        starlight::LayoutComputedStyle& computed_style,        \
                        bool css_align_with_legacy_w3c_ = false);
  FOREACH_LAYOUT_PROPERTY(SET_WITH_CSS_VALUE)
#undef SET_WITH_CSS_VALUE

  static bool SetValue(CSSPropertyID id, const CSSValue& value, bool reset,
                       const CssMeasureContext& measure_context,
                       const tasm::CSSParserConfigs& parser_configs_,
                       starlight::LayoutComputedStyle& computed_style,
                       bool css_align_with_legacy_w3c_ = false);
};

}  // namespace tasm
}  // namespace lynx

#endif  // CORE_RENDERER_UI_WRAPPER_LAYOUT_LAYOUT_COMPUTED_STYLE_SETTER_H_
