# New ports collection makefile for:	mime
# Date created:				3 June 2000
# Whom:					jmg
#
# $FreeBSD: ports/devel/mime/Makefile,v 1.15 2012/11/17 05:56:00 svnexp Exp $
#

PORTNAME=	mime
PORTVERSION=	1.1
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	http://resnet.uoregon.edu/~gurney_j/jmpc/dist/ \
		http://people.bsdgroup.de/~as/freebsd/distfiles/

MAINTAINER=	as@bsdgroup.de
COMMENT=	C library to parse mime data

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e "s,-fpic,-fpic -fPIC,g" ${WRKSRC}/Makefile.in

post-install:
	@(cd ${PREFIX}/lib ; ${LN} -sf libmime.so.1 libmime.so )

.include <bsd.port.mk>
