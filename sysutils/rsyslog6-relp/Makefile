# New ports collection makefile for: rsyslog4-relp
# Date created:     29 December 2008
# Whom:             Cristiano Rolim Pereira <cristianorolim@hotmail.com>
#
# $FreeBSD: ports/sysutils/rsyslog6-relp/Makefile,v 1.2 2012/11/17 06:01:44 svnexp Exp $
#

COMMENT=	RELP input/output module for rsyslog
MASTERDIR=	${.CURDIR}/../rsyslog6

MNAME=	relp
LIB_DEPENDS=	relp.0:${PORTSDIR}/devel/librelp

USE_PKGCONFIG=	yes

CONFIGURE_ARGS+=--enable-relp

PLIST_FILES+=	lib/rsyslog/imrelp.la \
		lib/rsyslog/imrelp.so \
		lib/rsyslog/omrelp.la \
		lib/rsyslog/omrelp.so

do-install:
	@${INSTALL_PROGRAM} \
		${WRKSRC}/plugins/omrelp/.libs/omrelp.so ${PREFIX}/lib/rsyslog
	@${INSTALL_DATA} \
		${WRKSRC}/plugins/omrelp/omrelp.la ${PREFIX}/lib/rsyslog
	@${INSTALL_PROGRAM} \
		${WRKSRC}/plugins/imrelp/.libs/imrelp.so ${PREFIX}/lib/rsyslog
	@${INSTALL_DATA} \
		${WRKSRC}/plugins/imrelp/imrelp.la ${PREFIX}/lib/rsyslog
.include "${MASTERDIR}/Makefile"
