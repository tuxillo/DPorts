# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: ports/databases/hiredis/Makefile,v 1.8 2012/12/01 16:34:58 svnexp Exp $

PORTNAME=	hiredis
PORTVERSION=	0.11.0
CATEGORIES=	databases

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Minimalistic C client library for the Redis database

LICENSE=	BSD

USE_GITHUB=	yes
GH_ACCOUNT=	redis
GH_TAGNAME=	v${PORTVERSION}
GH_COMMIT=	0fff0f1

USE_GMAKE=	yes
CFLAGS+=	-fPIC
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e '/^REAL_/s/ \$$(ARCH)//' ${WRKSRC}/Makefile

.include <bsd.port.mk>
