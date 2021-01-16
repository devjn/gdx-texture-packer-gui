#pragma once

#include <stdint.h>
#include <vector>

#define LOG_INFO "[BASISU_WRAPPER] INFO: "
#define LOG_ERROR "[BASISU_WRAPPER] ERROR: "

namespace basisuWrapper {

    bool validateHeader(uint8_t *data, uint32_t dataSize);

    bool validateChecksum(uint8_t *data, uint32_t dataSize, bool fullValidation);

    bool transcodeRgba32(std::vector<uint8_t> &out, uint8_t *data, uint32_t dataSize,
                   uint32_t imageIndex, uint32_t levelIndex);

    bool encode(std::vector<uint8_t> &out, uint8_t *rgbaData, uint32_t width, uint32_t height);

} // namespace basisuWrapper