# New ports collection makefile for:   phyml 3.0 20090706
# Date created:        July 17, 2009
# Whom:                ballen
#
# $FreeBSD: ports/biology/phyml/Makefile,v 1.5 2012/12/04 21:06:14 svnexp Exp $
#

PORTNAME=	phyml
PORTVERSION=	20090706
CATEGORIES=	biology
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	phyml_20090706

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A simple, fast, and accurate algorithm to estimate large phylogenies

WRKSRC=		${WRKDIR}/${PORTNAME}/src
GNU_CONFIGURE=	yes
PLIST_FILES=	bin/phyml
USE_AUTOTOOLS=	automake aclocal
AUTOMAKE_ARGS=	--add-missing

.include <bsd.port.pre.mk>

pre-configure:
	${RM} ${WRKSRC}/missing

pre-install:
	${CHMOD} a+x ${WRKSRC}/install-sh

.include <bsd.port.post.mk>
