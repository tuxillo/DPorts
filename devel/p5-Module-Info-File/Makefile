# New ports collection makefile for:	p5-Module-Info-File
# Date created:		2004-07-24
# Whom:			Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Module-Info-File/Makefile,v 1.7 2012/11/17 05:56:21 svnexp Exp $
#

PORTNAME=	Module-Info-File
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Module
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Retrieves module information from a file or script

RUN_DEPENDS=	p5-Module-Info>0.20:${PORTSDIR}/devel/p5-Module-Info
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	YES

MAN1=		version.pl.1
MAN3=		Module::Info::File.3

.include <bsd.port.mk>
