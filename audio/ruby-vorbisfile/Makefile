# New ports collection makefile for:	ruby-vorbisfile
# Date created:		5 October 2002
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/audio/ruby-vorbisfile/Makefile,v 1.12 2012/11/17 05:54:43 svnexp Exp $
#

PORTNAME=	vorbisfile
PORTVERSION=	0.2
PORTREVISION=	5
CATEGORIES=	audio ruby
MASTER_SITES=	http://rikkus.info/arch/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	ruby-${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Ruby extension wrapping libvorbisfile

LIB_DEPENDS=	vorbisfile.6:${PORTSDIR}/audio/libvorbis

USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes

INSTALL_TARGET=	site-install

DOCS=		ChangeLog README

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/test.rb ${RUBY_MODEXAMPLESDIR}/
	${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not compile with ruby 1.9
.endif
.include <bsd.port.post.mk>
