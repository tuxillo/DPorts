# New ports collection makefile for:	jonpy
# Date created:				12 Sep 2005
# Whom:					S�ren Straarup <xride@x12.dk>
#
# $FreeBSD: ports/www/py-jonpy/Makefile,v 1.7 2012/11/17 06:03:00 svnexp Exp $
#

PORTNAME=	jonpy
PORTVERSION=	0.10
CATEGORIES=	www python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Python FastCGI interface library

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
NO_BUILD=		yes

PORTDOCS=	*

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/* ${DOCSDIR}
.endif
	${MKDIR} ${EXAMPLESDIR}
	(cd ${WRKSRC}/example && ${FIND} . | \
		${CPIO} -pdmu -R ${SHAREOWN}:${SHAREGRP} ${EXAMPLESDIR})

.include <bsd.port.mk>
