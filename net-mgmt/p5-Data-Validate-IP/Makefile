# New ports collection makefile for:	net-mgmt/p5-Data-Validate-IP
# Date created:				02 January 2008
# Whom:					Tuc <freebsd-ports@t-b-o-h.net>
#
# $FreeBSD: ports/net-mgmt/p5-Data-Validate-IP/Makefile,v 1.8 2012/11/17 06:00:35 svnexp Exp $
#

PORTNAME=	Data-Validate-IP
PORTVERSION=	0.14
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NEELY
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd-ports@t-b-o-h.net
COMMENT=	Common data validation methods for IPs

BUILD_DEPENDS=	p5-Net-Netmask>=0:${PORTSDIR}/net-mgmt/p5-Net-Netmask
RUN_DEPENDS=	p5-Net-Netmask>=0:${PORTSDIR}/net-mgmt/p5-Net-Netmask

PERL_CONFIGURE=	yes

MAN3=	Data::Validate::IP.3

.include <bsd.port.mk>
