//
// PROJECT:         Aspia Remote Desktop
// FILE:            protocol/category_summary.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_PROTOCOL__CATEGORY_SUMMARY_H
#define _ASPIA_PROTOCOL__CATEGORY_SUMMARY_H

#include "base/macros.h"
#include "protocol/category.h"

namespace aspia {

class CategorySummary : public CategoryInfo
{
public:
    CategorySummary() = default;

    const char* Name() const final;
    IconId Icon() const final;

    const char* Guid() const final;
    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final;
    std::string Serialize() final;

private:
    DISALLOW_COPY_AND_ASSIGN(CategorySummary);
};

} // namespace aspia

#endif // _ASPIA_PROTOCOL__CATEGORY_SUMMARY_H
