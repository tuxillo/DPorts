# New ports collection makefile for:	p5-SMS-Send
# Date created:		2006-08-26
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: ports/comms/p5-SMS-Send/Makefile,v 1.9 2012/11/17 05:55:00 svnexp Exp $
#

PORTNAME=	SMS-Send
PORTVERSION=	1.06
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Driver-based API for sending SMS messages

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Adapter>=1.05:${PORTSDIR}/devel/p5-Class-Adapter \
		p5-Params-Util>=1.00:${PORTSDIR}/devel/p5-Params-Util
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		SMS::Send.3 \
		SMS::Send::AU::Test.3 \
		SMS::Send::Driver.3 \
		SMS::Send::Test.3

.include <bsd.port.mk>
