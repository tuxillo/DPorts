# New ports collection makefile for:	konversation
# Date created:				15 May 2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/irc/konversation-kde4/Makefile,v 1.52 2012/11/17 05:58:29 svnexp Exp $
#

PORTNAME=	konversation
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	irc kde
MASTER_SITES=	${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR=	stable/${PORTNAME}/${DISTVERSION}/src

MAINTAINER=	makc@FreeBSD.org
COMMENT=	A user friendly IRC client for KDE

LIB_DEPENDS=	qca.2:${PORTSDIR}/devel/qca

LATEST_LINK=	${PORTNAME}-kde4

USE_XZ=		yes
USE_CMAKE=	yes
USE_KDE4=	kdeprefix pimlibs automoc4
USE_QT4=	qmake_build moc_build rcc_build uic_build
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
