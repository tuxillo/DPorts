# New ports collection makefile for:	prips
# Date created:		29 October 1999
# Whom:			Jeremy Shaffner <jeremy@external.org>
#
# $FreeBSD: ports/sysutils/prips/Makefile,v 1.19 2012/11/17 06:01:42 svnexp Exp $
#

PORTNAME=	prips
PORTVERSION=	0.9.9
CATEGORIES=	sysutils
MASTER_SITES=	http://devel.ringlet.net/sysutils/prips/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Prints IP subnet ranges by list or CIDR

LICENSE=	GPLv2

PORTDOCS=	README
PLIST_FILES=	bin/prips

MAN1=		prips.1
MANCOMPRESSED=	yes

MAKE_ENV+=	CFLAGS_WARN="-Wall -W"

.include <bsd.port.pre.mk>

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/prips ${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/prips.1.gz ${PREFIX}/man/man1/
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
