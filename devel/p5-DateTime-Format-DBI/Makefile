# New ports collection makefile for:	p5-DateTime-Format-DBI
# Date created:	   2 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-DBI/Makefile,v 1.15 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-DBI
PORTVERSION=	0.040
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Find a parser class for a database connection

RUN_DEPENDS=	p5-DBI>=1.21:${PORTSDIR}/databases/p5-DBI \
		p5-DateTime>=0.1:${PORTSDIR}/devel/p5-DateTime
BUILD_DEPENDS:=	${RUN_DEPENDS}
BUILD_DEPENDS+=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

PERL_MODBUILD=	yes

MAN3=		DateTime::Format::DBI.3

.include <bsd.port.mk>
