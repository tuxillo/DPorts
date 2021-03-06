# New ports collection makefile for:	POE-Component-Client-HTTP
# Date created:		10 Dec 2001
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/www/p5-POE-Component-Client-HTTP/Makefile,v 1.38 2012/11/17 06:02:52 svnexp Exp $
#

PORTNAME=	POE-Component-Client-HTTP
PORTVERSION=	0.9470
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE component for non-blocking/concurrent HTTP queries

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-POE>=1.312:${PORTSDIR}/devel/p5-POE \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=1.37:${PORTSDIR}/net/p5-URI \
		p5-POE-Component-Client-Keepalive>=0.2710:${PORTSDIR}/net/p5-POE-Component-Client-Keepalive \
		p5-Socket>=2.001:${PORTSDIR}/net/p5-Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-POE-Server-TCP>=1.14:${PORTSDIR}/devel/p5-Test-POE-Server-TCP

PERL_CONFIGURE=	yes

MAN3=		POE::Component::Client::HTTP.3 \
		POE::Component::Client::HTTP::Request.3 \
		POE::Component::Client::HTTP::RequestFactory.3 \
		POE::Filter::HTTPChunk.3 POE::Filter::HTTPHead.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501400
TEST_DEPENDS+=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
