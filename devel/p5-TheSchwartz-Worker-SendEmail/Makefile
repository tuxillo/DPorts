# New ports collection makefile for:	p5-TheSchwartz-Worker-SendEmail
# Date created:		2010-11-18
# Whom:			Kurt Lidl <kurt.lidl@cello.com>
#
# $FreeBSD: ports/devel/p5-TheSchwartz-Worker-SendEmail/Makefile,v 1.6 2012/11/17 05:56:34 svnexp Exp $
#

PORTNAME=	TheSchwartz-Worker-SendEmail
PORTVERSION=	1.00
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BRADFITZ
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TheSchwartz Worker Task to Send Email

BUILD_DEPENDS=	p5-TheSchwartz>=1.10:${PORTSDIR}/devel/p5-TheSchwartz \
		p5-Net-DNS>=0.66_1:${PORTSDIR}/dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	TheSchwartz::Worker::SendEmail.3

.include <bsd.port.mk>
