# New ports collection makefile for:	p5-HTML-Packer
# Date created:		2011-07-23
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-HTML-Packer/Makefile,v 1.4 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	HTML-Packer
PORTVERSION=	1.004.001
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Another HTML code cleaner

BUILD_DEPENDS=	p5-Regexp-RegGrp>=1.001.001:${PORTSDIR}/devel/p5-Regexp-RegGrp
RUN_DEPENDS=	p5-Regexp-RegGrp>=1.001.001:${PORTSDIR}/devel/p5-Regexp-RegGrp

TEST_DEPENDS=	p5-Test-Pod>=1.22:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes

MAN3=		HTML::Packer.3

.include <bsd.port.mk>
