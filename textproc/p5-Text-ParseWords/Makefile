# New ports collection makefile for:	p5-Text-ParseWords
# Date created:				Jul 31, 2008
# Whom:					Philip M. Gollucci <pgollucci@p6m7g8.com>
#
# $FreeBSD: ports/textproc/p5-Text-ParseWords/Makefile,v 1.9 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-ParseWords
PORTVERSION=	3.27
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parse text into an array of tokens or array of arrays

MAKE_JOBS_SAFE=	yes

USE_ZIP=	yes
PERL_CONFIGURE=	yes

MAN3=	Text::ParseWords.3

PLIST_FILES=	%%SITE_PERL%%/Text/ParseWords.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Text/ParseWords/.packlist

PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/Text/ParseWords
PLIST_DIRSTRY=	%%SITE_PERL%%/Text \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Text

.include <bsd.port.mk>
