# New ports collection makefile for: rsyslog4-snmp
# Date created:     29 December 2008
# Whom:             Cristiano Rolim Pereira <cristianorolim@hotmail.com>
#
# $FreeBSD: ports/sysutils/rsyslog6-devel-rfc3195/Makefile,v 1.9 2012/11/17 06:01:44 svnexp Exp $
#

COMMENT=	RFC3195 input support for rsyslog
MASTERDIR=	${.CURDIR}/../rsyslog6-devel

MNAME=	rfc3195
LIB_DEPENDS+=	logging.0:${PORTSDIR}/devel/liblogging

USE_PKGCONFIG=	yes

CONFIGURE_ARGS+=--enable-rfc3195

PLIST_FILES+=	lib/rsyslog/im3195.la \
		lib/rsyslog/im3195.so

do-install:
	@${INSTALL_PROGRAM} \
		${WRKSRC}/plugins/im3195/.libs/im3195.so ${PREFIX}/lib/rsyslog
	@${INSTALL_DATA} \
		${WRKSRC}/plugins/im3195/im3195.la ${PREFIX}/lib/rsyslog
.include "${MASTERDIR}/Makefile"
