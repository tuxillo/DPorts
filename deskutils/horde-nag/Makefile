# Ports collection makefile for:  horde-nag
# Date created:			  Sun Dec 14, 2001
# Whom:				  Thierry Thomas (<thierry@pompo.net>)
#
# $FreeBSD: ports/deskutils/horde-nag/Makefile,v 1.56 2013/01/10 18:34:39 svnexp Exp $
#

PORTNAME=	nag
PORTVERSION=	4.0.2
CATEGORIES=	deskutils www pear
PKGNAMEPREFIX=	horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde web based task list manager

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LATEST_LINK=	horde-${PORTNAME}

USE_PHP=	gettext
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		content \
		horde \
		Horde_Auth \
		Horde_Core \
		Horde_Data \
		Horde_Date \
		Horde_Date_Parser \
		Horde_Exception \
		Horde_Form \
		Horde_Group \
		Horde_History \
		Horde_Icalendar \
		Horde_Mail \
		Horde_Mime \
		Horde_Perms \
		Horde_Prefs \
		Horde_Share \
		Horde_Support \
		Horde_Text_Filter \
		Horde_Url \
		Horde_Util \
		Horde_View

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
