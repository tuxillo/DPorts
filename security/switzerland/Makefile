# New ports collection makefile for:	Switzerland
# Date created:				08/08/08
# Whom:					Alexey Dokuchaev <danfe@FreeBSD.org>
#
# $FreeBSD: ports/security/switzerland/Makefile,v 1.7 2012/11/17 06:01:21 svnexp Exp $
#

PORTNAME=	switzerland
PORTVERSION=	0.1.0
CATEGORIES=	security python
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/zero%20point%20one
EXTRACT_SUFX=	.tgz

MAINTAINER=	beat@FreeBSD.org
COMMENT=	Test the integrity of communications over networks and firewalls

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PORTDOCS=	*

post-patch:
	@${REINPLACE_CMD} -e 's,gcc -O3,${CC} ${CFLAGS}, ; \
		s,"Switzerland","switzerland", ; \
		s,"0\.0","${PORTVERSION}",' ${WRKSRC}/setup.py

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/BUGS.txt ${WRKSRC}/README.txt \
		${WRKSRC}/doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
