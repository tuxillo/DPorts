# Created by: Kelly Yancey <kbyanc@posi.net>
# $FreeBSD: ports/editors/aee/Makefile,v 1.16 2012/12/12 19:43:42 svnexp Exp $

PORTNAME=	aee
PORTVERSION=	2.2.15b
PORTREVISION=	1
CATEGORIES=	editors
MASTER_SITES=	http://mahon.cwx.net/sources/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Easy editor with both curses and X11 interfaces

OPTIONS_DEFINE=	XAE
XAE_DESC=	Build X11 version 'xae'

.include <bsd.port.options.mk>

.if !${PORT_OPTIONS:MXAE}
ALL_TARGET=	main
PLIST_SUB=	XAE="@comment "
.else
USE_XORG=	x11
ALL_TARGET=	both
PLIST_SUB=	XAE=""
.endif

PLIST_FILES=	bin/aee bin/rae lib/help.ae %%XAE%%bin/xae %%XAE%%bin/rxae

MAN1=		aee.1

post-patch:
	@${REINPLACE_CMD} -e 's|cc|${CC}|g' ${WRKSRC}/create.mk.aee
	@${REINPLACE_CMD} -e 's|cc|${CC}|g' ${WRKSRC}/create.mk.xae
	@${REINPLACE_CMD} -e 's|/usr/X11R6|${LOCALBASE}|g' \
		${WRKSRC}/create.mk.xae

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/aee ${PREFIX}/bin
	${LN} ${PREFIX}/bin/aee ${PREFIX}/bin/rae
	${INSTALL_MAN} ${WRKSRC}/aee.1 ${PREFIX}/man/man1
	${INSTALL_DATA} ${WRKSRC}/help.ae ${PREFIX}/lib
.if ${PORT_OPTIONS:MXAE}
	${INSTALL_PROGRAM} ${WRKSRC}/xae ${PREFIX}/bin
	${LN} ${PREFIX}/bin/xae ${PREFIX}/bin/rxae
.endif

.include <bsd.port.mk>
