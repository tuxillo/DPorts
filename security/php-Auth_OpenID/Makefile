# New ports collection makefile for:	php-Auth_OpenID
# Date created:		2007-04-24
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/security/php-Auth_OpenID/Makefile,v 1.5 2012/11/17 06:01:15 svnexp Exp $
#

PORTNAME=	Auth_OpenID
PORTVERSION=	1.2.3
CATEGORIES=	security www pear
MASTER_SITES=	http://openidenabled.com/files/php-openid/packages/
PKGNAMEPREFIX=	php-
DISTNAME=	php-openid-${PORTVERSION}

MAINTAINER=	gslin@gslin.org
COMMENT=	PHP OpenID library

RUN_DEPENDS=	pear:${PORTSDIR}/devel/pear
BUILD_DEPENDS:=	${RUN_DEPENDS}

CONFLICTS=	pear-Auth_OpenID-2.*

USE_BZIP2=	yes
NO_BUILD=	yes
OPTIONS=	BCMATH "Use bcmath instead of libgmp" off \
		MYSQL "Use mysql" off \
		PGSQL "Use pgsql" off \
		SQLITE "Use sqlite" off

USE_PHP=	curl dom

.include <bsd.port.pre.mk>

.ifdef(WITH_BCMATH)
USE_PHP+=	bcmath
.else
USE_PHP+=	gmp
.endif

.ifdef(WITH_MYSQL)
USE_PHP+=	mysql
.endif

.ifdef(WITH_PGSQL)
USE_PHP+=	pgsql
.endif

.ifdef(WITH_SQLITE)
USE_PHP+=	sqlite
.endif

do-install:
	${MKDIR} ${PREFIX}/share/pear/Auth/OpenID
	${CP} ${WRKSRC}/Auth/OpenID.php ${PREFIX}/share/pear/Auth
	${CP} ${WRKSRC}/Auth/OpenID/* ${PREFIX}/share/pear/Auth/OpenID
	${MKDIR} ${PREFIX}/share/pear/Services/Yadis
	${CP} ${WRKSRC}/Services/Yadis/* ${PREFIX}/share/pear/Services/Yadis
	${MKDIR} ${EXAMPLESDIR}
	${CP} -R ${WRKSRC}/examples/ ${EXAMPLESDIR}

.include <bsd.port.post.mk>
