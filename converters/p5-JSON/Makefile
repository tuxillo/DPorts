# New ports collection makefile for:	JSON
# Date created:		19 Aug 2005
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/converters/p5-JSON/Makefile,v 1.29 2012/11/17 05:55:04 svnexp Exp $
#

PORTNAME=	JSON
PORTVERSION=	2.53
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to convert to JSON (JavaScript Object Notation)

CONFLICTS=	p5-JSON-1.*
PERL_CONFIGURE=	yes

MAN3=		JSON.3 \
		JSON::backportPP.3 \
		JSON::backportPP::Boolean.3 \
		JSON::backportPP::Compat5005.3 \
		JSON::backportPP::Compat5006.3

.include <bsd.port.mk>
