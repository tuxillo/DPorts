# New ports collection Makefile for:    tivoka
# Date created:				16 July 2012
# Whom:					gahr
#
# $FreeBSD: ports/www/tivoka/Makefile,v 1.2 2012/11/17 06:03:07 svnexp Exp $
#

PORTNAME=	tivoka
PORTVERSION=	3.0.1
CATEGORIES=	www

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	JSON-RPC client/server library for PHP

LICENSE=	MIT

USE_PHP=	json filter
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	marcelklehr
GH_COMMIT=	4cbf436

LIBDIR=		${PREFIX}/lib/php/${PHP_EXT_DIR}/${PORTNAME}
PLIST_SUB+=	LIBDIR=${LIBDIR:S/${PREFIX}\///}

do-install:
	@${MKDIR} ${LIBDIR}
	@${INSTALL_DATA} ${WRKSRC}/include.php ${LIBDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} lib ${LIBDIR}
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@cd ${WRKSRC}/example && ${COPYTREE_SHARE} \* ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
