# $FreeBSD: ports/graphics/svgfig/Makefile,v 1.5 2012/12/12 18:51:45 svnexp Exp $

PORTNAME=	SVGFig
PORTVERSION=	1.1.6
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Draw mathematical figures in SVG using Python

WRKSRC=		${WRKDIR}/${PORTNAME:tl}

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|1.1.2|${PORTVERSION}|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
