# New ports collection makefile for:	Ruby-sysvipc
# Date created:		12 May 2001
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/devel/ruby-sysvipc/Makefile,v 1.18 2012/11/17 05:56:58 svnexp Exp $
#

PORTNAME=	sysvipc
PORTVERSION=	0.7
CATEGORIES=	devel ruby
MASTER_SITES=	RF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Ruby interface to use System V IPC system calls

USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes

INSTALL_TARGET=	site-install

DOCS=		${RUBY_RD_HTML_FILES}

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not build with ruby 1.9
.endif

post-install: doc-install

doc-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.post.mk>
