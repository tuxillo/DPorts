# Created by: Bill Fenner <fenner@FreeBSD.Org>
# $FreeBSD: ports/audio/xmms-shn/Makefile,v 1.32 2012/12/18 21:34:11 svnexp Exp $

PORTNAME=	xmms-shn
PORTVERSION=	2.4.1
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://www.etree.org/shnutils/xmms-shn/dist/src/

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	XMMS plugin to allow playing shorten-compressed audio

BUILD_DEPENDS=	xmms-config:${PORTSDIR}/multimedia/xmms
RUN_DEPENDS=	xmms:${PORTSDIR}/multimedia/xmms

USE_GNOME=	gtk12
GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
