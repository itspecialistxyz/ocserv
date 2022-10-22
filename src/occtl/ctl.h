#ifndef CTL_H
# define CTL_H

#define OCCTL_UNIX_SOCKET "/var/run/occtl.socket"

enum {
	CTL_CMD_STATUS = 1,
	CTL_CMD_RELOAD,
	CTL_CMD_STOP,
	CTL_CMD_LIST,
	CTL_CMD_USER_INFO,
	CTL_CMD_ID_INFO,
	CTL_CMD_DISCONNECT_NAME,
	CTL_CMD_DISCONNECT_ID,
	CTL_CMD_LIST_BANNED,
	CTL_CMD_UNBAN_IP,
	CTL_CMD_TOP,
	CTL_CMD_LIST_COOKIES,

	CTL_CMD_STATUS_REP = 101,
	CTL_CMD_RELOAD_REP,
	CTL_CMD_STOP_REP,
	CTL_CMD_LIST_REP,
	CTL_CMD_DISCONNECT_NAME_REP,
	CTL_CMD_DISCONNECT_ID_REP,
	CTL_CMD_UNBAN_IP_REP,
	CTL_CMD_LIST_BANNED_REP,
	CTL_CMD_TOP_UPDATE_REP,
	CTL_CMD_LIST_COOKIES_REP
};

#endif
