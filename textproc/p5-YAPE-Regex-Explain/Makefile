# New ports collection makefile for:	p5-YAPE-Regex-Explain
# Date created:	   3 juin 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/textproc/p5-YAPE-Regex-Explain/Makefile,v 1.8 2012/11/17 06:02:14 svnexp Exp $
#

PORTNAME=	YAPE-Regex-Explain
PORTVERSION=	4.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GSULLIVAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Explanation of a Regular Expression

RUN_DEPENDS=	p5-YAPE-Regex>=0:${PORTSDIR}/textproc/p5-YAPE-Regex
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		YAPE::Regex::Explain.3

.include <bsd.port.mk>
