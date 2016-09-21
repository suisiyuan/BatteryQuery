#pragma once

#define SERVER_IP		"192.168.1.7"
#define SERVER_TCP_PORT	20108
#define WAITING_TIME	1000

#define TIME_IN_MINUTE	5


#define ACK_MASK		(1 << 7)
#define BATTERY			0x06
#define BATTERY_RSP		0x06 | ACK_MASK
