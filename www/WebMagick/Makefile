# New ports collection makefile for:    WebMagick
# Date created:                         20 May 1998
# Whom:                                 ache
#
# $FreeBSD: ports/www/WebMagick/Makefile,v 1.114 2013/01/08 02:43:01 svnexp Exp $
#

PORTNAME=	WebMagick
PORTVERSION=	2.03p18
DISTVERSION=	2.03pre18
PORTEPOCH=	1
CATEGORIES=	www graphics
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}-beta/${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Image Web Generator - recursively build HTMLs, imagemaps, thumbnails

LICENSE=	GPLv2

LIB_DEPENDS=	MagickWand:${PORTSDIR}/graphics/ImageMagick
RUN_DEPENDS=	p5-Sort-Naturally>=0:${PORTSDIR}/textproc/p5-Sort-Naturally

USE_PERL5=	yes
USE_AUTOTOOLS=  autoconf aclocal automake
AUTOMAKE_ARGS+=	--add-missing
INFO=		webmagick
CONFIGURE_ENV=	webmagick_cv_rootpath=${PREFIX}/www/data \
		webmagick_cv_iconpath=webmagick \
		webmagick_cv_prefixpath="" \
		webmagick_cv_htimage="" \
		webmagick_cv_maptype=ncsa \
		PERL=${PERL}

.include <bsd.port.pre.mk>

.if !exists(${LOCALBASE}/bin/xlsfonts)
WITHOUT_X11=	yes
.endif

.if defined(WITHOUT_X11)
CONFIGURE_ENV+=with_x=no
.endif

MAN1=		webmagick.1

pre-install:
	@${MKDIR} ${PREFIX}/www/data

post-install:
	cd ${WRKSRC}; \
	if [ ! -f ${PREFIX}/etc/webmagickrc ] ; then \
		${INSTALL_DATA} webmagickrc ${PREFIX}/etc; \
	fi; \
	${INSTALL_DATA} webmagickrc ${PREFIX}/etc/webmagickrc.dist

.include <bsd.port.post.mk>
