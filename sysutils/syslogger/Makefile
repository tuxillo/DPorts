# New ports collection makefile for:	syslogger
# Date created:				01 October 2008
# Whom:					Xavier Beaudouin <kiwi@oav.net>
#
# $FreeBSD: ports/sysutils/syslogger/Makefile,v 1.2 2012/11/17 06:01:47 svnexp Exp $
#

PORTNAME=	syslogger
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	http://oav.net/projects/syslogger/

MAINTAINER=	kiwi@oav.net
COMMENT=	A logger(1) like tool that sends file or pipe througth syslog

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=		bin/syslogger

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/syslogger ${PREFIX}/bin

.include <bsd.port.mk>
