# New ports collection makefile for: kile
# Date created:		21 Jun 2002
# Whom:			Stefan Jahn <stefan.jahn@nemesis-sektor.de>
#
# $FreeBSD: ports/editors/kile-kde4/Makefile,v 1.59 2012/11/17 05:57:14 svnexp Exp $
#

PORTNAME=	kile
PORTVERSION=	2.1.3
CATEGORIES=	editors kde
MASTER_SITES=	SF/${PORTNAME}/stable/${PORTNAME}-${DISTVERSION}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	A LaTeX source editor for KDE

RUN_DEPENDS=	latex:${PORTSDIR}/print/teTeX-base \
		identify:${PORTSDIR}/graphics/ImageMagick

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_QT4=	qmake_build moc_build rcc_build uic_build
USE_KDE4=	kdeprefix kdelibs automoc4 sharedmime kate_run
MAKE_JOBS_SAFE=	yes

LATEST_LINK=	${PORTNAME}-kde4

OPTIONS_DEFINE=	OKULAR
OKULAR_DESC=	Use Okular for viewing

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MOKULAR}
USE_KDE4+=	okular_run
.endif

.include <bsd.port.mk>
