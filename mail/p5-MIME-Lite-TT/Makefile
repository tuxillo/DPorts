# New ports collection makefile for:	mail/p5-MIME-Lite-TT
# Date created:				23 March 2008
# Whom:					Tuc <freebsd-ports@t-b-o-h.net>
#
# $FreeBSD: ports/mail/p5-MIME-Lite-TT/Makefile,v 1.4 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	MIME-Lite-TT
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd-ports@t-b-o-h.net
COMMENT=	TT enabled MIME::Lite wrapper

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-MIME-Lite>=0:${PORTSDIR}/mail/p5-MIME-Lite \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-MIME-Lite>=0:${PORTSDIR}/mail/p5-MIME-Lite \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

PERL_CONFIGURE=	yes

MAN3=	MIME::Lite::TT.3

.include <bsd.port.mk>
