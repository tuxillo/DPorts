# New ports collection makefile for:	myphpmoney
# Date created:				Sun Mar 09, 2003
# Whom:					courou <courou@users.sourceforge.net>
#
# $FreeBSD: ports/finance/myphpmoney/Makefile,v 1.9 2012/11/17 05:57:25 svnexp Exp $

PORTNAME=		myphpmoney
PORTVERSION=		1.3.r3
PORTEPOCH=		1
CATEGORIES=		finance www
MASTER_SITES=		SF/${PORTNAME}/MyPhpMoney/1.3RC3
DISTNAME=		${PORTNAME}-${PORTVERSION:S/.r/RC/}

MAINTAINER=		courou@users.sourceforge.net
COMMENT=		A PHP script for managing your accounts

WEBOWN?=		www
WEBGRP?=		www
APACHEDIR=		${PREFIX}/www/data
INSTALLDIR=		${APACHEDIR}/myphpmoney
USE_BZIP2=		yes
USE_PHP=		yes
WANT_PHP_WEB=		yes
NO_BUILD=		yes

PLIST_SUB+=		INSTALLDIR=${INSTALLDIR:S,^${PREFIX}/,,}

do-install:
	${MKDIR} ${INSTALLDIR}
	cd ${WRKSRC}; ${FIND} . \
		| ${CPIO} -pdm -R ${WEBOWN}:${WEBGRP} ${INSTALLDIR}
	${CHMOD} -R ${BINMODE} ${INSTALLDIR}
	${CHMOD} 777 ${INSTALLDIR}/public_html/dump
	${FIND} ${INSTALLDIR} ! -type d | ${XARGS} ${CHMOD} ${NOBINMODE}

.include <bsd.port.mk>
