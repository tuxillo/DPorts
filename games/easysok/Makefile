# New ports collection makefile for:	easysok
# Date created:				15 May 2003
# Whom:					Kirill Ponomarew <ponomarew@oberon.net>
#
# $FreeBSD: ports/games/easysok/Makefile,v 1.27 2012/12/30 18:55:58 svnexp Exp $

PORTNAME=	easysok
PORTVERSION=	0.3.5
PORTREVISION=	8
CATEGORIES=	games kde
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}-${PORTVERSION}-kde3

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A sokoban game for KDE3

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

DEPRECATED=	Depends on QT3; unmaintained
EXPIRATION_DATE=	2013-07-01

USE_BZIP2=	yes
USE_KDELIBS_VER=3
USE_GMAKE=	yes
USE_AUTOTOOLS=	libtool

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64" || ${ARCH} == "ia64"
CFLAGS+=	-fPIC
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|-O2||g ; \
		 s|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/${CONFIGURE_SCRIPT}
	@${REINPLACE_CMD} -e \
		's|-lkdeprint|$$(LIB_KDEPRINT) $$(LIBPTHREAD)|g' \
			${WRKSRC}/src/Makefile.in

.include <bsd.port.post.mk>
