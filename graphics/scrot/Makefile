# New ports collection makefile for:	scrot
# Date created:				27 Oct 2000
# Whom:					Jeremy Norris <ishmael27@home.com>
#
# $FreeBSD: ports/graphics/scrot/Makefile,v 1.26 2012/11/17 05:58:22 svnexp Exp $
#

PORTNAME=	scrot
PORTVERSION=	0.8
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://linuxbrit.co.uk/downloads/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A screen capture utility that utilizes Imlib2

LIB_DEPENDS=	giblib.1:${PORTSDIR}/graphics/giblib

GNU_CONFIGURE=	yes

.if defined(NOPORTDOCS)
MAKE_ENV=	NO_DOC=yes
.endif

MAN1=		scrot.1

.include <bsd.port.mk>
