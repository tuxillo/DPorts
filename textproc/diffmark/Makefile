# New ports collection makefile for:	diffmark
# Date created:	   05 September 2006
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/diffmark/Makefile,v 1.7 2012/11/17 06:01:54 svnexp Exp $
#

PORTNAME=	diffmark
PORTVERSION=	0.10
CATEGORIES=	textproc
MASTER_SITES=	http://www.mangrove.cz/diffmark/

MAINTAINER=	skv@FreeBSD.org
COMMENT=	XML diff and merge package

LIB_DEPENDS=	xml2.5:${PORTSDIR}/textproc/libxml2

USE_LDCONFIG=	YES
GNU_CONFIGURE=	YES
CONFIGURE_ARGS=	--with-libxml2-incldir=${LOCALBASE}/include/libxml2

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
