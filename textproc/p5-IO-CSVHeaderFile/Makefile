# New ports collection makefile for:	p5-IO-CSVHeaderFile
# Date created:				Nov 23 03:11:08 MSK 2004
# Whom:					Vasek Balcar <vasek@ti.cz>
#
# $FreeBSD: ports/textproc/p5-IO-CSVHeaderFile/Makefile,v 1.7 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	IO-CSVHeaderFile
PORTVERSION=	0.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vasek@ti.cz
COMMENT=	Perl module to automate reads from CSV formatted text files

BUILD_DEPENDS=	p5-Text-CSV_XS>=0:${PORTSDIR}/textproc/p5-Text-CSV_XS
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		IO::CSVHeaderFile.3

.include <bsd.port.mk>
