/* 自编 C 示例（非原文）：一帧中包含一条采集记录。 */
#ifndef STUDY_CAPTURE_FRAME_H
#define STUDY_CAPTURE_FRAME_H

#include "record.h"

struct capture_frame {
    struct capture_record first;
};

#endif
