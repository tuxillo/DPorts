# ex:ts=8
# Ports collection makefile for:	wol
# Created by: ijliao
# $FreeBSD: ports/net/wol/Makefile,v 1.35 2012/11/17 06:00:25 svnexp Exp $

PORTNAME=	wol
PORTVERSION=	0.7.1
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	SF/ahh/OldFiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to wake up Wake-On-LAN compliant computers

GNU_CONFIGURE=		yes
USE_PERL5_BUILD=	yes
CPPFLAGS+=		-I${LOCALBASE}/include
LDFLAGS+=		-L${LOCALBASE}/lib

.if defined(WITHOUT_NLS)
CONFIGURE_ARGS=	--disable-nls
PLIST_SUB=	NLS="@comment "
.else
USE_GETTEXT=	yes
USE_ICONV=	yes
PLIST_SUB=	NLS=""
.endif

MAN1=		wol.1
INFO=		wol
DOCS=		AUTHORS NEWS README TODO

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
