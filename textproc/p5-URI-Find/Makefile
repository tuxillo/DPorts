# New ports collection makefile for:	p5-URI-Find
# Date created:				13 August 2001
# Whom:					Pete Fritchman <petef@databits.net>
#
# $FreeBSD: ports/textproc/p5-URI-Find/Makefile,v 1.23 2012/12/17 06:36:02 svnexp Exp $
#

PORTNAME=	URI-Find
PORTVERSION=	20111103
CATEGORIES=	textproc net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to find URIs in arbitrary text

BUILD_DEPENDS=	p5-URI>=1:${PORTSDIR}/net/p5-URI
RUN_DEPENDS=	p5-URI>=1:${PORTSDIR}/net/p5-URI

PERL_MODBUILD=	yes

MAN1=		urifind.1
MAN3=		URI::Find.3 \
		URI::Find::Schemeless.3

.include <bsd.port.mk>
