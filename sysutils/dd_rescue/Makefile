# New ports collection makefile for:   dd_rescue
# Date created:        14 March 2005
# Whom:                MANTANI Nobutaka <nobutaka@freebsd.org>
#
# $FreeBSD: ports/sysutils/dd_rescue/Makefile,v 1.15 2012/11/17 06:01:28 svnexp Exp $
#

PORTNAME=	dd_rescue
PORTVERSION=	1.28
CATEGORIES=	sysutils
MASTER_SITES=	http://www.garloff.de/kurt/linux/ddrescue/

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	A dd tool suitable for rescuing data from a medium with errors

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}
ALL_TARGET=	default

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dd_rescue ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA}	${WRKSRC}/README.dd_rescue ${DOCSDIR}
.endif

.include <bsd.port.mk>
