# New ports collection makefile for:	p5-Probe-Perl
# Date created:		2008-02-14
# Whom:			Felippe de Meirelles Motta <lippemail@gmail.com>
#
# $FreeBSD: ports/sysutils/p5-Probe-Perl/Makefile,v 1.5 2012/11/17 06:01:40 svnexp Exp $
#

PORTNAME=	Probe-Perl
PORTVERSION=	0.01
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:KWILLIAMS
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Information about the currently running perl

BUILD_DEPENDS+=	p5-PathTools>=0:${PORTSDIR}/devel/p5-PathTools
RUN_DEPENDS+=	p5-PathTools>=0:${PORTSDIR}/devel/p5-PathTools

PERL_CONFIGURE=	yes

MAN3=		Probe::Perl.3

.include <bsd.port.mk>
