# New ports collection makefile for:	vcdgear
# Date created:	 	06 January 1999
# Whom:			Chris Piazza <cpiazza@FreeBSD.org>
#
# $FreeBSD: ports/multimedia/vcdgear/Makefile,v 1.18 2012/11/17 05:59:54 svnexp Exp $
#

PORTNAME=	vcdgear
PORTVERSION=	1.6d
CATEGORIES=	multimedia
MASTER_SITES=	http://www.vcdgear.com/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A tool to convert VCDs from cue/bin format to mpeg

ONLY_FOR_ARCHS=	alpha i386 amd64

.include <bsd.port.pre.mk>

.if ${ARCH} == i386 || ${ARCH} == x86_64
DISTNAME=	${PORTNAME}16d_i386_freebsd42
.elif ${ARCH} == alpha
DISTNAME=	${PORTNAME}16d_alpha_freebsd41
.endif

NO_BUILD=	true
WRKSRC=		${WRKDIR}/vcdgear16

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/vcdgear16_static ${PREFIX}/bin/vcdgear
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for file in faq.txt manual.txt whatsnew.txt
	${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.post.mk>
