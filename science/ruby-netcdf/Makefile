# New ports collection makefile for:	RubyNetCDF
# Date created:		11 June 2002
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/science/ruby-netcdf/Makefile,v 1.19 2012/11/17 06:01:00 svnexp Exp $
#

PORTNAME=	netcdf
PORTVERSION=	0.6.6
CATEGORIES=	science ruby
MASTER_SITES=	http://ruby.gfd-dennou.org/products/ruby-netcdf/release/ \
		http://dennou-h.gfd-dennou.org/library/ruby/products/ruby-netcdf/release/ \
		http://dennou-q.gfd-dennou.org/library/ruby/products/ruby-netcdf/release/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	ruby-${PORTNAME}-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A Ruby interface to the NetCDF scientific IO library

BUILD_DEPENDS=	${RUBY_SITEARCHLIBDIR}/narray.so:${PORTSDIR}/math/ruby-narray
LIB_DEPENDS=	netcdf.4:${PORTSDIR}/science/netcdf
RUN_DEPENDS=	${RUBY_SITEARCHLIBDIR}/narray.so:${PORTSDIR}/math/ruby-narray

USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes

DOCS=		ChangeLog ToDo doc/*

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${RUBY_MODEXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demo/* ${RUBY_MODEXAMPLESDIR}/
	${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.mk>
