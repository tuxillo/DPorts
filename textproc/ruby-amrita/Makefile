# New ports collection makefile for:	Ruby/amrita
# Date created:		10 November 2002
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/textproc/ruby-amrita/Makefile,v 1.10 2012/11/17 06:02:19 svnexp Exp $
#

PORTNAME=	amrita
PORTVERSION=	1.0.2
CATEGORIES=	textproc www ruby
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE_JP}
MASTER_SITE_SUBDIR=	amrita/10939
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An HTML/XHTML template library for Ruby

USE_RUBY=	yes
USE_RUBY_FEATURES=	strscan

RUBY_SHEBANG_FILES=	${BINS}

BINS=		${WRKSRC}/bin/*
DOCS=		ChangeLog README* docs/*

do-install:
	cd ${WRKSRC}; ${RUBY} install.rb
	${INSTALL_SCRIPT} ${BINS} ${PREFIX}/bin/
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
	${CP} -R ${WRKSRC}/sample/* ${RUBY_MODEXAMPLESDIR}/
	${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	${CP} -R ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.pre.mk>
.if ${RUBY_VER} == 1.9
BROKEN=	does not build with ruby 1.9
.endif
.include <bsd.port.post.mk>
