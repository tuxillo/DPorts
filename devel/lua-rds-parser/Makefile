# New ports collection makefile for:	lua-rds-parser
# Date created:		12 Jan 2012
# Whom:			osa
#
# $FreeBSD: ports/devel/lua-rds-parser/Makefile,v 1.2 2012/11/17 05:55:59 svnexp Exp $
#

PORTNAME=	rds-parser
PORTVERSION=	0.0.4
CATEGORIES=	devel
MASTER_SITES=	https://github.com/agentzh/lua-rds-parser/tarball/master/
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}
DISTNAME=	lua-${PORTNAME}-${PORTVERSION}-${GITVERSION}

MAINTAINER=	osa@FreeBSD.org
COMMENT=	Resty-DBD-Stream (RDS) parser for Lua written in C

FETCH_ARGS=	-pRr
USE_LUA?=	5.1
GITVERSION=	0-gb46bbd8
WRKSRC=		${WRKDIR}/agentzh-lua-rds-parser-${GITVERSION:S/^0-g//}

PLIST_FILES=	%%LUA_MODLIBDIR%%/rds/parser.so
PLIST_DIRS=	%%LUA_MODLIBDIR%%/rds

do-install:
	${MKDIR} ${LUA_MODLIBDIR}/rds
	${INSTALL_PROGRAM} ${WRKSRC}/parser.so ${LUA_MODLIBDIR}/rds

.include <bsd.port.mk>
