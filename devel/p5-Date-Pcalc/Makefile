# New ports collection makefile for:	p5-Date-Pcalc
# Date created:				5 July 2001
# Whom:	      				Gregory Shapiro <gshapiro@freebsd.org>
#
# $FreeBSD: ports/devel/p5-Date-Pcalc/Makefile,v 1.12 2012/11/17 05:56:11 svnexp Exp $
#

PORTNAME=	Date-Pcalc
PORTVERSION=	6.1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:STBEY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Gregorian calendar date calculations

BUILD_DEPENDS=	p5-Carp-Clan>=5.3:${PORTSDIR}/devel/p5-Carp-Clan \
		p5-Bit-Vector>=7.0:${PORTSDIR}/math/p5-Bit-Vector

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	</dev/null

MAN3=		Date::Pcalc.3 \
		Date::Pcalc::Object.3 \
		Date::Pcalendar.3 \
		Date::Pcalendar::Profiles.3 \
		Date::Pcalendar::Year.3

.include <bsd.port.mk>
