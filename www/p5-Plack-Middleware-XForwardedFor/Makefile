# New ports collection makefile for:	p5-Plack-Middleware-XForwardedFor
# Date created:		2010-12-13
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/p5-Plack-Middleware-XForwardedFor/Makefile,v 1.5 2012/11/17 06:02:53 svnexp Exp $
#

PORTNAME=	Plack-Middleware-XForwardedFor
PORTVERSION=	0.103060
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Plack middleware to handle X-Forwarded-For headers

BUILD_DEPENDS=	p5-Net-Netmask>=1.9015:${PORTSDIR}/net-mgmt/p5-Net-Netmask \
		p5-Plack>=0.9913:${PORTSDIR}/www/p5-Plack \
		p5-Regexp-Common>=2010010201:${PORTSDIR}/textproc/p5-Regexp-Common
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Plack::Middleware::XForwardedFor.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501200
BUILD_DEPENDS+=	p5-parent>=0.223:${PORTSDIR}/devel/p5-parent
RUN_DEPENDS+=	p5-parent>=0.223:${PORTSDIR}/devel/p5-parent
.endif

.include <bsd.port.post.mk>
