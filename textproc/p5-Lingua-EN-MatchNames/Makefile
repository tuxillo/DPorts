# New ports collection makefile for:	Lingua::EN::MatchNames
# Date created:				30 Dec 2001
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/textproc/p5-Lingua-EN-MatchNames/Makefile,v 1.10 2012/11/17 06:02:05 svnexp Exp $
#

PORTNAME=	Lingua-EN-MatchNames
PORTVERSION=	1.12
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Smart matching for human names

BUILD_DEPENDS=	p5-Lingua-EN-NameParse>=0:${PORTSDIR}/textproc/p5-Lingua-EN-NameParse \
		p5-Lingua-EN-Nickname>=0:${PORTSDIR}/textproc/p5-Lingua-EN-Nickname \
		p5-String-Approx>=0:${PORTSDIR}/devel/p5-String-Approx \
		p5-Text-Metaphone>=0:${PORTSDIR}/textproc/p5-Text-Metaphone
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Lingua::EN::MatchNames.3

.include <bsd.port.mk>
