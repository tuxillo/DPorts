# New ports collection makefile for:	cmatrix
# Date created:				1 May 1999
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/misc/cmatrix/Makefile,v 1.17 2012/11/17 05:59:33 svnexp Exp $
#

PORTNAME=	cmatrix
PORTVERSION=	1.2a
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Show a scrolling 'Matrix' like screen

MAN1=		cmatrix.1

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
PORTDOCS=	ChangeLog README TODO
PLIST_FILES=	bin/cmatrix

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/cmatrix ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/cmatrix.1 ${PREFIX}/man/man1
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
