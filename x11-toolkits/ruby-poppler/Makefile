# New ports collection makefile for:	ruby-poppler
# Date created:		2010-11-19
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/x11-toolkits/ruby-poppler/Makefile,v 1.10 2012/11/17 06:03:39 svnexp Exp $
#

PORTNAME=	poppler
PORTVERSION=	${RUBY_GNOME_PORTVERSION}
CATEGORIES=	x11-toolkits ruby
MASTER_SITES=	${RUBY_GNOME_MASTER_SITES}
MASTER_SITE_SUBDIR=	${RUBY_GNOME_MASTER_SITE_SUBDIR}
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	${RUBY_GNOME_DISTNAME}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for Poppler

LIB_DEPENDS=	poppler-glib.8:${PORTSDIR}/graphics/poppler-glib
BUILD_DEPENDS=	rubygem-pkg-config>=1.0.7:${PORTSDIR}/devel/rubygem-pkg-config
RUN_DEPENDS=	rubygem-pkg-config>=1.0.7:${PORTSDIR}/devel/rubygem-pkg-config

USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes
CONFIGURE_ARGS=	--with-pkg-config-dir=${LOCALBASE}/libdata/pkgconfig

MASTERDIR=	${.CURDIR}/../../x11/ruby-gnome2
PKGDIR=		${.CURDIR}

.include "${MASTERDIR}/Makefile.common"

WRKSRC=		${RUBY_GNOME_WRKSRC}/${PORTNAME}
INSTALL_TARGET=	site-install install

DOCS=		COPYING.LIB README

post-patch:
	@${FIND} ${WRKSRC} -name '*.bak' -delete

post-install:
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${RUBY_MODEXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/sample/* ${RUBY_MODEXAMPLESDIR}/
.endif
.if !defined(NOPORTDOCS)
	@${MKDIR} ${RUBY_MODDOCDIR}
.for f in ${DOCS}
	@${INSTALL_DATA} ${WRKSRC}/${f} ${RUBY_MODDOCDIR}/
.endfor
.endif

.include <bsd.port.mk>
