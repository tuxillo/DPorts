# New ports collection makefile for:	py-editobj
# Date created:				2005-10-05
# Whom:					Jose Alonso Cardenas Marquez <acardenas@bsd.org.pe>
#
# $FreeBSD: ports/graphics/py-editobj/Makefile,v 1.7 2012/11/17 05:58:20 svnexp Exp $
#

PORTNAME=	editobj
PORTVERSION=	0.5.7
CATEGORIES=	graphics python
MASTER_SITES=	http://download.gna.org/songwrite/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	EditObj-${PORTVERSION}

MAINTAINER=	acm@FreeBSD.org
COMMENT=	Create and display a Tkinter dialog box for editing any Python object

DIST_SUBDIR=	python
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	EditObj
WRKSRC=		${WRKDIR}/EditObj-${PORTVERSION}
EXAMPLESDIR=	${PREFIX}/share/examples/py-editobj

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demo/* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
