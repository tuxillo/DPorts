# New ports collection makefile for:	Ruby/xmlconfigfile
# Date created:		25 February 2003
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/textproc/ruby-xmlconfigfile/Makefile,v 1.8 2012/11/17 06:02:20 svnexp Exp $
#

PORTNAME=	xmlconfigfile
PORTVERSION=	0.9.7
CATEGORIES=	textproc devel ruby
MASTER_SITES=	http://www.cs.ualberta.ca/~schofiel/xml-configfile/downloads/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	xml-configfile-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	A Ruby module for easy handling of XML configuration files

USE_RUBY=	yes
USE_RUBY_FEATURES=	rexml
USE_RUBY_SETUP=	yes
RUBY_SETUP=	install.rb

DOCS=		docs CHANGES README TODO

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	${CP} -R ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.mk>
