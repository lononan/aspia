//
// PROJECT:         Aspia
// FILE:            system_info/category_process.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_SYSTEM_INFO__CATEGORY_PROCESS_H
#define _ASPIA_SYSTEM_INFO__CATEGORY_PROCESS_H

#include "system_info/category.h"

namespace aspia {

class CategoryProcess : public CategoryInfo
{
public:
    CategoryProcess();

    const char* Name() const final;
    IconId Icon() const final;

    const char* Guid() const final;
    void Parse(Table& table, const std::string& data) final;
    std::string Serialize() final;

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryProcess);
};

} // namespace aspia

#endif // _ASPIA_SYSTEM_INFO__CATEGORY_PROCESS_H
