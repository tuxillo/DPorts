# ex:ts=8
# New ports collection makefile for:	libshhmsg
# Date created:				1 May 1998
# Whom:					Andrey Zakhvatov
#
# $FreeBSD: ports/devel/libshhmsg/Makefile,v 1.16 2012/11/17 05:55:56 svnexp Exp $
#

PORTNAME=	libshhmsg
PORTVERSION=	1.4.1
CATEGORIES=	devel
MASTER_SITES=	http://shh.thathost.com/pub-unix/files/
DISTNAME=	shhmsg-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for displaying messages

MAKEFILE=	${FILESDIR}/Makefile.lib
USE_LDCONFIG=	yes

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in CREDITS README shhmsg.txt
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
