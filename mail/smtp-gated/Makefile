# New ports collection makefile for:   smtp-gated
# Date created:        1 January 2006
# Whom:                msciciel
#
# $FreeBSD: ports/mail/smtp-gated/Makefile,v 1.13 2012/12/10 19:24:02 svnexp Exp $
#

PORTNAME=	smtp-gated
PORTVERSION=	1.4.18.8
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://software.klolik.org/smtp-gated/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Proxy for SMTP sessions with virus and spam scan

LICENSE=	GPLv2

OPTIONS_DEFINE=	NAT CHUNKING ECONNRESET PCRE
OPTIONS_DEFAULT=	NAT PCRE
NAT_DESC=	NAT transparent proxy code
CHUNKING_DESC=	Enable support for SMTP CHUNKING extension
ECONNRESET_DESC=	Be quiet about Connection reset by peer message

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN5=		smtp-gated.conf.5
MAN8=		smtp-gated.8
PLIST_FILES=	sbin/smtp-gated

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNAT}
CONFIGURE_ARGS+=	--enable-nat
.else
CONFIGURE_ARGS+=	--disable-nat
.endif

.if ${PORT_OPTIONS:MCHUNKING}
CONFIGURE_ARGS+=	--enable-chunking
.endif

.if ${PORT_OPTIONS:MECONNRESET}
CONFIGURE_ARGS+=	--enable-silent-econnreset
.endif

.if ${PORT_OPTIONS:MPCRE}
LIB_DEPENDS+=	pcre.3:${PORTSDIR}/devel/pcre
.else
CONFIGURE_ARGS+=	--disable-pcre
.endif

.include <bsd.port.pre.mk>

.if ${ARCH} == "powerpc"
BROKEN=		Does not compile on powerpc: cannot determine endianness
.endif

.include <bsd.port.post.mk>
