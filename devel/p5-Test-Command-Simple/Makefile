# New ports collection makefile for:	devel/p5-Test-Command-Simple
# Date created:				13 March 2011
# Whom:					Anton Berezin <tobez@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Test-Command-Simple/Makefile,v 1.4 2012/11/30 13:01:43 svnexp Exp $
#

PORTNAME=	Test-Command-Simple
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DMCBRIDE
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Test external commands (nearly) as easily as loaded modules

TEST_DEPENDS=	p5-Test-Simple>=0.96:${PORTSDIR}/devel/p5-Test-Simple

PERL_CONFIGURE=	yes

MAN3=	Test::Command::Simple.3

.include <bsd.port.mk>
