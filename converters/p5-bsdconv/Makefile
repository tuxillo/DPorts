# Created by: buganini@gmail.com
# $FreeBSD: ports/converters/p5-bsdconv/Makefile,v 1.15 2012/11/17 05:55:04 svnexp Exp $

PORTNAME=	bsdconv
PORTVERSION=	9.0
CATEGORIES=	converters perl5
PKGNAMEPREFIX=	p5-
DISTNAME=	${GH_ACCOUNT}-${GH_PROJECT}-${PORTVERSION}-0-g${GH_COMMIT}

MAINTAINER=	buganini@gmail.com
COMMENT=	Perl wrapper for bsdconv

LICENSE=	BSD

LIB_DEPENDS=	bsdconv:${PORTSDIR}/converters/bsdconv

USE_GITHUB=	yes
GH_ACCOUNT=	buganini
GH_PROJECT=	perl-${PORTNAME}
GH_COMMIT=	c98a201

PERL_CONFIGURE=	yes

MAN3=		bsdconv.3

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
