/*
 * Copyright (C) 2015 Alexandros Frantzis
 * Author: Alexandros Frantzis <alexandros.frantzis@canonical.com>
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version. See http://www.gnu.org/copyleft/gpl.html the full text of the
 * license.
 */

#ifndef LOG_MODE_H_
#define LOG_MODE_H_

typedef enum
{
    LOG_MODE_INVALID = -1,
    LOG_MODE_BACKUP_AND_TRUNCATE,
    LOG_MODE_APPEND
} LogMode;

#endif /* !LOD_MODE_H_ */