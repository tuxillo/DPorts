# ex:ts=8
# New ports collection makefile for:	Crank
# Date created:			Apr 18, 2001
# Whom:				Ying-Chieh Liao <ijliao@FreeBSD.org>
#
# $FreeBSD: ports/security/crank/Makefile,v 1.19 2012/11/17 06:01:02 svnexp Exp $
#

PORTNAME=	crank
PORTVERSION=	0.2.1
PORTREVISION=	6
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CRyptANalysis toolKit

LIB_DEPENDS=	guile:${PORTSDIR}/lang/guile

USE_GNOME=	gtk12
GNU_CONFIGURE=	yes
GUILE_CONFIG=	${LOCALBASE}/bin/guile-config
LDFLAGS+=	`${GUILE_CONFIG} link`
CFLAGS+=	`${GUILE_CONFIG} compile`
USE_GMAKE=	yes

INFO=		crank

.include <bsd.port.mk>
