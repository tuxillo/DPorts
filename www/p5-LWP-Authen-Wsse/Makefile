# New ports collection makefile for:	p5-LWP-Authen-Wsse
# Date created:				Wed Jun 23 15:15:30 CST 2004
# Whom:					Cheng-Lung Sung <clsung@dragon2.net>
#
# $FreeBSD: ports/www/p5-LWP-Authen-Wsse/Makefile,v 1.11 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	LWP-Authen-Wsse
PORTVERSION=	0.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Library for enabling X-WSSE authentication in LWP

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		LWP::Authen::Wsse.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500805
BUILD_DEPENDS+=	p5-MIME-Base64>=0:${PORTSDIR}/converters/p5-MIME-Base64
.endif

.include <bsd.port.post.mk>
