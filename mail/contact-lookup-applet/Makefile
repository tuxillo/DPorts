# New ports collection makefile for:	contact lookup applet
# Date created:				22 January 2004
# Whom:					kwm@rainbow-runner.nl
#
# $FreeBSD: ports/mail/contact-lookup-applet/Makefile,v 1.26 2012/11/17 05:59:00 svnexp Exp $
#   $MCom: ports/mail/contact-lookup-applet/Makefile,v 1.15 2007/07/29 22:17:31 mezz Exp $
#

PORTNAME=	contact
PORTVERSION=	0.17
PORTREVISION=	8
CATEGORIES=	mail gnome
MASTER_SITES=	http://www.burtonini.com/computing/
PKGNAMESUFFIX=	-lookup-applet
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Gnome panel applet for easy Evolution contact book access

USE_GNOME=	evolutiondataserver gnomehack gnomepanel gnomeprefix \
		libgnomeui
USE_GETTEXT=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
