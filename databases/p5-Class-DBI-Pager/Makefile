# New ports collection makefile for:	p5-Class-DBI-Pager
# Date created:	   21 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/databases/p5-Class-DBI-Pager/Makefile,v 1.11 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	Class-DBI-Pager
PORTVERSION=	0.08
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pager utility for Class::DBI

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-Exporter-Lite>=0:${PORTSDIR}/devel/p5-Exporter-Lite \
		p5-Data-Page>=0:${PORTSDIR}/databases/p5-Data-Page \
		p5-Clone>=0:${PORTSDIR}/devel/p5-Clone

PERL_CONFIGURE=	yes

MAN3=		Class::DBI::Pager.3

.include <bsd.port.mk>
