# ex:ts=8
# New ports collection makefile for:	clint
# Date created:			May 1, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/devel/clint/Makefile,v 1.26 2012/11/17 05:55:38 svnexp Exp $
#

PORTNAME=	clint
PORTVERSION=	0.1.2
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A static source code checker for C++

USE_AUTOTOOLS=	libtool
USE_PYTHON=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	MAKEINFO="makeinfo --no-split"
USE_LDCONFIG=	yes

INFO=		clint

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/configure
	@${FIND} ${WRKSRC} -name "Makefile.in" | ${XARGS} ${REINPLACE_CMD} -e \
		's|-pedantic||g ; \
		 s|-ldl||g'

.include <bsd.port.mk>
