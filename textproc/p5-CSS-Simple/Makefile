# New ports collection makefile for:	p5-CSS-Simple
# Date created:				Thu Oct 28 09:56:23 EDT 2010
# Whom:					Vivek Khera <vivek@khera.org>
#
# $FreeBSD: ports/textproc/p5-CSS-Simple/Makefile,v 1.3 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	CSS-Simple
PORTVERSION=	3211
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vivek@khera.org
COMMENT=	Interface through which to read/write/manipulate CSS files

BUILD_DEPENDS=	p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash
RUN_DEPENDS=	p5-Tie-IxHash>=0:${PORTSDIR}/devel/p5-Tie-IxHash

PERL_CONFIGURE=	yes

MAN3=		CSS::Simple.3
PLIST_FILES=	%%SITE_PERL%%/CSS/Simple.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/CSS/Simple/.packlist
PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/CSS/Simple \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/CSS \
		%%SITE_PERL%%/CSS

.include <bsd.port.mk>
