# New ports collection makefile for:	p5-SMS-Send-NexmoUnicode
# Date created:		2011-12-01
# Whom:			Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
#
# $FreeBSD: ports/comms/p5-SMS-Send-NexmoUnicode/Makefile,v 1.2 2012/11/17 05:55:00 svnexp Exp $
#

PORTNAME=	SMS-Send-NexmoUnicode
PORTVERSION=	0.01
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JNLIN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jnlin@csie.nctu.edu.tw
COMMENT=	SMS::Send driver for www.nexmo.com (Unicode)

BUILD_DEPENDS=	p5-Nexmo-SMS>=0.04:${PORTSDIR}/comms/p5-Nexmo-SMS \
		p5-SMS-Send>=0:${PORTSDIR}/comms/p5-SMS-Send
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		SMS::Send::NexmoUnicode.3

.include <bsd.port.mk>
