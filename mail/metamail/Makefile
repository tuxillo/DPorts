# Created by: torstenb
# $FreeBSD: ports/mail/metamail/Makefile,v 1.42 2012/11/17 05:59:05 svnexp Exp $

PORTNAME=	metamail
PORTVERSION=	2.7
PORTREVISION=	10
CATEGORIES=	mail
MASTER_SITES=	http://ftp.funet.fi/pub/unix/mail/metamail/ \
		ftp://ftp.research.telcordia.com/pub/nsb/
DISTNAME=	mm${PORTVERSION}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Implementation of MIME, the Multipurpose Internet Mail Extensions

LICENSE=	MIT

OPTIONS_DEFINE=	X11
OPTIONS_DEFAULT=	X11
X11_DESC=	X11 hebrew font support

WRKSRC=		${WRKDIR}/${DISTNAME}/src

MAN1=		audiocompose.1 audiosend.1 extcompose.1 \
		getfilename.1 mailto-hebrew.1 mailto.1 metamail.1 \
		metasend.1 mime.1 mimencode.1 mmencode.1 \
		patch-metamail.1 richtext.1 showaudio.1 \
		showexternal.1 shownonascii.1 showpartial.1 \
		showpicture.1 splitmail.1
MAN4=		mailcap.4

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MX11}
BUILD_DEPENDS+=	bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf \
		mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale
RUN_DEPENDS+=	xloadimage:${PORTSDIR}/x11/xloadimage \
		mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir
USE_XORG=	x11
PLIST_SUB+=	X11=""
.else
PLIST_SUB+=	X11="@comment "
.endif

post-patch:
.if empty(PORT_OPTIONS:MX11)
	@${REINPLACE_CMD} -e '/fonts/d' ${WRKSRC}/Makefile
.endif
	@${RM} ${WRKSRC}/bin/*.orig

.include <bsd.port.mk>
