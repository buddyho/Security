/* Copyright (C) 2009 Trend Micro Inc.
 * All rights reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef __CAGENTD_H
#define __CAGENTD_H

/* Configuration structure */
typedef struct _agent {
    char *port;
    int m_queue;
    int sock; /* Socket for UDP and receiving over TCP */
    int sock_r; /* Remote socket, for sending over TCP */
    int execdq;
    int rip_id;
    char *lip;
    char **rip; /* remote (server) IP */
    int notify_time;
    int max_time_reconnect_try;
    char *profile;
    int protocol;
} agent;

#endif /* __CAGENTD_H */
