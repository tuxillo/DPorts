# New ports collection makefile for:	digikam-doc
# Date created: 			4 September 2005
# Whom:					Arjan van Leeuwen <avleeuwen@piwebs.com>
#
# $FreeBSD: ports/graphics/digikam-doc/Makefile,v 1.15 2012/11/17 05:58:03 svnexp Exp $
#

PORTNAME=	digikam-doc
PORTVERSION=	0.9.5
PORTREVISION=	4
CATEGORIES=	graphics kde
MASTER_SITES=	SF
MASTER_SITE_SUBDIR=	${PORTNAME:S/-doc//}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ale@FreeBSD.org
COMMENT=	Documentation for Digikam

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_KDELIBS_VER=3

post-patch:
	@${REINPLACE_CMD} -e 's@-lpthread@${PTHREAD_LIBS}@g' \
		${WRKSRC}/${CONFIGURE_SCRIPT}
	@${TOUCH} ${WRKSRC}/*

.include <bsd.port.mk>
