# New ports collection makefile for:	vpnc-scripts
# Date created:				20 Apr 2012
# Whom:					Ryan Steinmetz <zi@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/vpnc-scripts/Makefile,v 1.4 2012/11/24 18:31:21 svnexp Exp $
#

PORTNAME=	vpnc-scripts
PORTVERSION=	20121109
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.infradead.org/pub/${PORTNAME}/ \
		http://mirrors.rit.edu/zi/

MAINTAINER=	zi@FreeBSD.org
COMMENT=	A collection of scripts to setup routes and other changes for a VPN

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

NO_BUILD=	yes

PLIST_FILES=	sbin/vpnc-script sbin/vpnc-script-sshd sbin/vpnc-script-ptrtd

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/vpnc-script ${PREFIX}/sbin
	${INSTALL_SCRIPT} ${WRKSRC}/vpnc-script-sshd ${PREFIX}/sbin
	${INSTALL_SCRIPT} ${WRKSRC}/vpnc-script-ptrtd ${PREFIX}/sbin

.include <bsd.port.mk>
