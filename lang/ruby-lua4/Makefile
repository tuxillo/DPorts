# New ports collection makefile for:	Ruby/Lua
# Date created:		30 August 2001
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/lang/ruby-lua4/Makefile,v 1.10 2012/11/17 05:58:56 svnexp Exp $
#

PORTNAME=	lua
PORTVERSION=	20010921
PORTREVISION=	1
CATEGORIES=	lang ruby
MASTER_SITES=	LOCAL/knu
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	ruby${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Ruby extension to make Lua script language as a class

USE_LUA=	4.0
USE_ZIP=	yes

USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes
RUBY_EXTCONF=	luaconf.rb
RUBY_MODNAME=	${PORTNAME}-${LUA_VER}

NO_WRKSUBDIR=	yes
INSTALL_TARGET=	site-install

EXAMPLES=	html_ssi_lua.rb test_*

post-patch:
	@${REINPLACE_CMD} -Ee 's/[[:<:]](lua(lib)?)[[:>:]]/\1-${LUA_VER}/' \
		${WRKSRC}/${RUBY_EXTCONF}

post-configure:
	@${REINPLACE_CMD} -Ee 's|^(CPPFLAGS =.*)|\1 -I${LUA_INCDIR}|' \
		${WRKSRC}/${MAKEFILE}

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
.for f in ${EXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODEXAMPLESDIR}/
.endfor
	${MKDIR} ${RUBY_MODDOCDIR}
	${INSTALL_DATA} ${WRKSRC}/rubylua.txt ${RUBY_MODDOCDIR}/
.endif

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not build with ruby 1.9
.endif
.include <bsd.port.post.mk>
