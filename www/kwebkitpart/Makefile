# $FreeBSD: ports/www/kwebkitpart/Makefile,v 1.12 2012/11/17 06:02:38 svnexp Exp $

PORTNAME=	kwebkitpart
PORTVERSION=	1.3.0
CATEGORIES=	www kde
MASTER_SITES=	LOCAL/avilla

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Web browser component for KDE SC based on QtWebKit

USE_KDE4=	kdehier kdelibs kdeprefix automoc4
USE_QT4=	designer gui webkit \
		moc_build qmake_build rcc_build uic_build
USE_BZIP2=	yes
USE_CMAKE=	yes
MAKE_JOBS_SAFE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
