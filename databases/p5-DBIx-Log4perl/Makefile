# New ports collection makefile for:	p5-DBIx-Log4perl
# Date created:				2006-07-20
# Whom:					Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
#
# $FreeBSD: ports/databases/p5-DBIx-Log4perl/Makefile,v 1.24 2012/11/17 05:55:15 svnexp Exp $
#

PORTNAME=	DBIx-Log4perl
PORTVERSION=	0.26
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	For DBI to selectively log SQL, parameters, result-sets, transactions

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DBI>=1.500:${PORTSDIR}/databases/p5-DBI \
		p5-Log-Log4perl>=1.04:${PORTSDIR}/devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DBIx::Log4perl.3

.include <bsd.port.mk>
