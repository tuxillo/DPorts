# New ports collection makefile for:	tmpreaper
# Date created:				21 Jul 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/sysutils/tmpreaper/Makefile,v 1.14 2012/11/17 06:01:48 svnexp Exp $
#

PORTNAME=	tmpreaper
PORTVERSION=	1.6.13
CATEGORIES=	sysutils
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Cleans up files in directories based on their age

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	sbin/tmpreaper
PORTDOCS=	README
MAN8=		tmpreaper.8

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
