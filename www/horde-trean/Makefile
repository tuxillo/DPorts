# Ports collection makefile for:  horde-trean
# Date created:			  Dec 18, 2012
# Whom:				  Martin Matuska (mm@FreeBSD.org)
#
# $FreeBSD: ports/www/horde-trean/Makefile,v 1.18 2012/12/18 13:47:26 svnexp Exp $
#

PORTNAME=	trean
DISTVERSION=	1.0.0beta2
CATEGORIES=	www pear
PKGNAMEPREFIX=	horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Bookmark Manager

LICENSE=	BSD
LICENSE_FILE=	${WRKSRC}/LICENSE

LATEST_LINK=	horde-${PORTNAME}

USE_PHP=	gettext json
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		horde \
		content \
		Horde_Auth \
		Horde_Autoloader \
		Horde_Controller \
		Horde_Core \
		Horde_Date \
		Horde_Db \
		Horde_Exception \
		Horde_Form \
		Horde_Notification \
		Horde_Perms \
		Horde_Util \
		Horde_Vfs \
		Horde_View

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>