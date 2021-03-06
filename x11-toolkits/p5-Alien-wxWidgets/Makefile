# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: ports/x11-toolkits/p5-Alien-wxWidgets/Makefile,v 1.20 2012/11/21 23:04:29 svnexp Exp $

PORTNAME=	Alien-wxWidgets
PORTVERSION=	0.51
PORTREVISION=	1
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module for building, finding and using wxWidgets binaries

BUILD_DEPENDS=	p5-ExtUtils-CBuilder>=0:${PORTSDIR}/devel/p5-ExtUtils-CBuilder

OPTIONS_DEFINE=	UNICODE
OPTIONS_DEFAULT=	UNICODE
UNICODE_DESC=	Build with Unicode support

USE_GCC=	any
USE_WX=		2.6+
WX_COMPS=	wx contrib
PERL_MODBUILD=	yes

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500809
BUILD_DEPENDS+=	p5-Module-Pluggable>=0:${PORTSDIR}/devel/p5-Module-Pluggable
.endif

.if ${PORT_OPTIONS:MUNICODE}
WX_UNICODE=	yes
WX_UNI=		uni_
CONFIGURE_ARGS+=	--wxWidgets-build=0 --wxWidgets-unicode=1
.else
CONFIGURE_ARGS+=	--wxWidgets-build=0 --wxWidgets-unicode=0
.endif

WX_UVER=	${WX_CONFIG:T} --version | ${TR} '.' '_'
PLIST_SUB+=	WX_UVER="$$(${WX_UVER})" WX_UNI=${WX_UNI}

MAN3=		Alien::wxWidgets.3 \
		Alien::wxWidgets::Utility.3

post-patch:
	@${REINPLACE_CMD} -e 's/wx-config/${WX_CONFIG:T}/' ${WRKSRC}/Build.PL
	@${REINPLACE_CMD} -e "s/\'wx-config/\'${WX_CONFIG:T}/" -e "s/lc_r/lpthread/" \
		${WRKSRC}/inc/My/Build/Any_wx_config.pm

.include <bsd.port.post.mk>
