# New ports collection makefile for:	guiloader
# Date created:		11 May 2007
# Whom:			Yinghong Liu <relaxbsd@gmail.com>
#
# $FreeBSD: ports/devel/guiloader/Makefile,v 1.17 2012/11/17 05:55:46 svnexp Exp $
#

PORTNAME=	guiloader
PORTVERSION=	2.19.0
PORTREVISION=	1
CATEGORIES=	devel gnome
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A high-performance and compact GuiXml loader library

PROJECTHOST=	nothing-personal
USE_BZIP2=	yes
USE_GNOME=	gnomehack gtk20
USE_GETTEXT=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-hidden-visibility
USE_LDCONFIG=	yes

.include <bsd.port.mk>
