# New ports collection makefile for:    p5-HTML-CalendarMonthSimple
# Date created:				May 27 2001
# Whom:	      				vanilla
#
# $FreeBSD: ports/www/p5-HTML-CalendarMonthSimple/Makefile,v 1.20 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-CalendarMonthSimple
PORTVERSION=	1.25
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTML::CalendarMonthSimple - Perl Module for Generating HTML Calendars

BUILD_DEPENDS=	p5-Date-Calc>=0:${PORTSDIR}/devel/p5-Date-Calc
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::CalendarMonthSimple.3

.include <bsd.port.mk>
