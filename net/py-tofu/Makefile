# New ports collection makefile for:	py-tofu
# Date created:				2005-10-05
# Whom:					Jose Alonso Cardenas Marquez <acardenas@bsd.org.pe>
#
# $FreeBSD: ports/net/py-tofu/Makefile,v 1.9 2012/11/17 06:00:16 svnexp Exp $
#

PORTNAME=	tofu
PORTVERSION=	0.5
CATEGORIES=	net python
MASTER_SITES=	http://download.gna.org/soya/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Tofu-${PORTVERSION}

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Practical high-level network game engine

DIST_SUBDIR=	python
USE_BZIP2=	yes
USE_PYTHON=	yes
USE_TWISTED=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	Tofu
WRKSRC=		${WRKDIR}/Tofu-${PORTVERSION}
EXAMPLESDIR=	${PREFIX}/share/examples/py-tofu

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demo/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
