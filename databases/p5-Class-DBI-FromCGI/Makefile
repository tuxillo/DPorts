# New ports collection makefile for:	p5-Class-DBI-FromCGI
# Date created:	   21 july 2003
# Whom:		   mat
#
# $FreeBSD: ports/databases/p5-Class-DBI-FromCGI/Makefile,v 1.9 2012/11/17 05:55:13 svnexp Exp $
#

PORTNAME=	Class-DBI-FromCGI
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	databases www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Update Class::DBI data using CGI::Untaint

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-CGI-Untaint>=0:${PORTSDIR}/www/p5-CGI-Untaint

PERL_CONFIGURE=	yes

MAN3=		Class::DBI::FromCGI.3

.include <bsd.port.mk>
