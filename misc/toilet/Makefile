# New ports collection makefile for:	toilet
# Date created:		13 August 2007
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/misc/toilet/Makefile,v 1.13 2012/11/17 05:59:45 svnexp Exp $
#

PORTNAME=	toilet
PORTVERSION=	0.3
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://caca.zoy.org/raw-attachment/wiki/toilet/

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Enhanced figlet(6)

LIB_DEPENDS=	caca.0:${PORTSDIR}/graphics/libcaca

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-transform-name=""
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-fno-strength-reduce
MAN1=		${PORTNAME}.1
PORT_VERBS=	${PORTNAME} caca2tlf share/figlet/*tlf

post-patch:
	@${REINPLACE_CMD} -e '/CFLAGS=/d;/ac_build_date=/s|=.*|="$$stamp"|'\
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|\$$\^|$${.ALLSRC}|' ${WRKSRC}/doc/Makefile.in

post-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/tools/caca2tlf ${PREFIX}/bin/

.include <bsd.port.mk>
