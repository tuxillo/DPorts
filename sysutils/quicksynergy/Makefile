# New ports collection makefile for:	quicksynergy
# Date created:		2008-03-28
# Whom:			Lars Engels <lme@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/quicksynergy/Makefile,v 1.17 2012/11/17 06:01:43 svnexp Exp $
#

PORTNAME=	quicksynergy
PORTVERSION=	0.9.0
PORTREVISION=	5
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/Linux/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A graphical interface for easily configuring Synergy2

BUILD_DEPENDS=	synergys:${PORTSDIR}/sysutils/synergy

GNU_CONFIGURE=	yes
USE_ICONV=	yes
USE_GETTEXT=	yes
USE_PKGCONFIG=	yes
USE_GNOME=	gnomehack gnomeprefix libglade2

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/quicksynergy \
		share/locale/pt_BR/LC_MESSAGES/quicksynergy.mo

.include <bsd.port.mk>
