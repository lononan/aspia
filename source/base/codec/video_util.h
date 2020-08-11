//
// Aspia Project
// Copyright (C) 2020 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef BASE__CODEC__VIDEO_UTIL_H
#define BASE__CODEC__VIDEO_UTIL_H

#include "base/desktop/geometry.h"
#include "base/desktop/pixel_format.h"
#include "proto/desktop.pb.h"

namespace base {

Rect parseRect(const proto::Rect& rect);
void serializeRect(const Rect& from, proto::Rect* to);
PixelFormat parsePixelFormat(const proto::PixelFormat& format);
void serializePixelFormat(const PixelFormat& from, proto::PixelFormat* to);

} // namespace base

#endif // BASE__CODEC__VIDEO_UTIL_H
