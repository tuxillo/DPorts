# New ports collection makefile for:	net/p5-Net-Appliance-Session
# Date created:				05 May 2010
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-Net-Appliance-Session/Makefile,v 1.11 2012/12/17 15:43:22 svnexp Exp $
#

PORTNAME=	Net-Appliance-Session
PORTVERSION=	3.122.100
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Run command-line sessions to network appliances

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Moose>=2:${PORTSDIR}/devel/p5-Moose \
		p5-Net-CLI-Interact>=1.122.100:${PORTSDIR}/net/p5-Net-CLI-Interact
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::Appliance::Session.3 \
		Net::Appliance::Session::APIv2.3

.include <bsd.port.mk>
