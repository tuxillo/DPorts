# New ports collection makefile for: fly
# Date created:         30 December 1997
# Whom:                 Juergen Unger <j.unger@choin.net>
#
# $FreeBSD: ports/graphics/fly/Makefile,v 1.22 2012/11/17 05:58:05 svnexp Exp $
#

PORTNAME=	fly
PORTVERSION=	2.0.1
PORTREVISION=	4
CATEGORIES=	graphics
MASTER_SITES=	http://fossies.org/unix/www/ \
		http://martin.gleeson.com/fly/dist/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple drawing language to generate GIFs on the fly

LIB_DEPENDS=	gd.4:${PORTSDIR}/graphics/gd

PORTDOCS=	*
PORTEXAMPLES=	*
PLIST_FILES=	bin/fly

do-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -I${LOCALBASE}/include fly.c -o fly \
		-L${LOCALBASE}/lib -lgd

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fly ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${DOCSDIR})
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${EXAMPLESDIR})
.endif

.include <bsd.port.mk>
