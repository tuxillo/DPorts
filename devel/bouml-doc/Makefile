# New ports collection makefile for:	bouml-doc
# Date created:		23 December 2007
# Whom:			Thierry Thomas <thierry@pompo.net>
#
# $FreeBSD: ports/devel/bouml-doc/Makefile,v 1.14 2012/11/17 05:55:35 svnexp Exp $
#

PORTNAME=	bouml-doc
PORTVERSION=	4.23
CATEGORIES=	devel
MASTER_SITES=	SF/bouml/doc/${PORTVERSION}_ultimate/
DISTNAME=	doc${PORTVERSION}

MAINTAINER=	thierry@FreeBSD.org
COMMENT=	Reference manual of BOUML

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/doc
DOCSDIR=	${PREFIX}/share/doc/bouml

do-install:
	${MKDIR} ${DOCSDIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${DOCSDIR})

.include <bsd.port.mk>
